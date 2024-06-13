#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <moveit_msgs/action/move_group.hpp>
#include <moveit_msgs/msg/move_it_error_codes.hpp>
#include <fstream>
#include <sstream>
#include <iostream>  // For the progress bar
#include <iomanip>   // For setting output width
#include <chrono>    // For time tracking

class MoveItBenchmark : public rclcpp::Node {
public:
    MoveItBenchmark() : Node("moveit_benchmark") {
        RCLCPP_INFO(this->get_logger(), "Node has been initialized.");
        this->declare_parameter<std::string>("csv_file", "/home/malik/interbotix_moveit/src/emse_rx150_benchmarks/config/valid_pick_and_place_poses.csv");
        this->get_parameter("csv_file", csv_file_);
        
        RCLCPP_INFO(this->get_logger(), "CSV file path: %s", csv_file_.c_str());
        
        if (!loadPosesFromCSV(csv_file_)) {
            RCLCPP_ERROR(this->get_logger(), "Failed to load poses from CSV file");
            return;
        }
    }

    bool performBenchmark() {
        RCLCPP_INFO(this->get_logger(), "Starting benchmark...");

        std::ofstream results_file("benchmark_results.csv");
        results_file << "position_x,position_y,position_z,orientation_x,orientation_y,orientation_z,orientation_w,average_success,average_planning_time,average_trajectory_length\n";
        std::ofstream log_file("move_group_interface_calls.log");

        RCLCPP_INFO(this->get_logger(), "Creating MoveGroupInterface");
        move_group = std::make_shared<moveit::planning_interface::MoveGroupInterface>(this->shared_from_this(), "interbotix_arm");
        
        RCLCPP_INFO(this->get_logger(), "MoveGroupInterface created");

        moveit::planning_interface::MoveGroupInterface::Plan plan;  // Declare the plan variable

        size_t total_poses = poses_.size();
        size_t current_pose = 0;
        size_t successful_poses = 0;

        auto benchmark_start = std::chrono::high_resolution_clock::now();

        RCLCPP_INFO(this->get_logger(), "Starting benchmark with %zu poses", total_poses);

        for (const auto& pose : poses_) {
            double total_planning_time = 0.0;
            double total_trajectory_length = 0.0;
            int success_count = 0;

            for (int i = 0; i < 10; ++i) {
                RCLCPP_INFO(this->get_logger(), "Setting pose target");
                move_group->setStartStateToCurrentState();
                move_group->setPoseTarget(pose);

                auto start = std::chrono::high_resolution_clock::now();
                RCLCPP_INFO(this->get_logger(), "Planning for pose [%f, %f, %f, %f, %f, %f, %f]", 
                            pose.position.x, pose.position.y, pose.position.z,
                            pose.orientation.x, pose.orientation.y, pose.orientation.z, pose.orientation.w);
                
                // Log request to the file in the format used by the action interface
                log_file << "Planning attempt " << (i+1) << " for pose: "
                         << pose.position.x << ", " << pose.position.y << ", " << pose.position.z << ", "
                         << pose.orientation.x << ", " << pose.orientation.y << ", " << pose.orientation.z << ", " << pose.orientation.w << "\n";
                
                log_file << "Request: { GoalID: " << move_group->getGoalName() << ", Pose: { position: (" 
                         << pose.position.x << ", " << pose.position.y << ", " << pose.position.z << "), orientation: ("
                         << pose.orientation.x << ", " << pose.orientation.y << ", " << pose.orientation.z << ", " << pose.orientation.w 
                         << ") } }\n";

                auto success = (move_group->plan(plan) == moveit::core::MoveItErrorCode::SUCCESS);
                auto end = std::chrono::high_resolution_clock::now();

                double planning_time = std::chrono::duration<double>(end - start).count();
                double trajectory_length = calculateTrajectoryLength(plan.trajectory_);

                total_planning_time += planning_time;
                total_trajectory_length += trajectory_length;

                if (success) {
                    ++success_count;
                }

                // Log response to the file in the format used by the action interface
                log_file << "Response: { Success: " << success << ", Planning Time: " << planning_time << ", Trajectory Length: " << trajectory_length << " }\n";
            }

            double average_success = static_cast<double>(success_count) / 10;
            double average_planning_time = total_planning_time / 10;
            double average_trajectory_length = total_trajectory_length / 10;

            results_file << pose.position.x << "," << pose.position.y << "," << pose.position.z << ","
                         << pose.orientation.x << "," << pose.orientation.y << "," << pose.orientation.z << "," << pose.orientation.w << ","
                         << average_success << "," << average_planning_time << "," << average_trajectory_length << "\n";

            RCLCPP_INFO(this->get_logger(), "Pose [%f, %f, %f] - Average Success: %f, Average Planning Time: %f, Average Trajectory Length: %f",
                        pose.position.x, pose.position.y, pose.position.z, average_success, average_planning_time, average_trajectory_length);

            if (average_success > 0.0) {
                ++successful_poses;
            }

            // Update progress bar and estimate remaining time
            ++current_pose;
            printProgressBar(current_pose, total_poses);

            auto current_time = std::chrono::high_resolution_clock::now();
            double elapsed_time = std::chrono::duration<double>(current_time - benchmark_start).count();
            double estimated_total_time = (elapsed_time / current_pose) * total_poses;
            double estimated_remaining_time = estimated_total_time - elapsed_time;

            RCLCPP_INFO(this->get_logger(), "Progress: %zu/%zu poses planned. Estimated time remaining: %.2f seconds.",
                        current_pose, total_poses, estimated_remaining_time);
        }

        results_file.close();
        log_file.close();
        RCLCPP_INFO(this->get_logger(), "Benchmarking completed. Results saved to benchmark_results.csv");
        RCLCPP_INFO(this->get_logger(), "Total successful poses: %zu out of %zu", successful_poses, total_poses);

        return true;
    }

private:
    std::string csv_file_;
    std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group;
    std::vector<geometry_msgs::msg::Pose> poses_;

    bool loadPosesFromCSV(const std::string& file_path) {
        std::ifstream file(file_path);
        if (!file.is_open()) {
            RCLCPP_ERROR(this->get_logger(), "Unable to open file: %s", file_path.c_str());
            return false;
        }
        // Skip the first line (header)
        std::string line;
        std::getline(file, line);

        while (std::getline(file, line)) {
            RCLCPP_DEBUG(this->get_logger(), "Reading line: %s", line.c_str());
            std::istringstream ss(line);
            std::string token;
            geometry_msgs::msg::Pose pose;

            try {
                std::getline(ss, token, ',');
                pose.position.x = std::stod(token);
                std::getline(ss, token, ',');
                pose.position.y = std::stod(token);
                std::getline(ss, token, ',');
                pose.position.z = std::stod(token);
                std::getline(ss, token, ',');
                pose.orientation.x = std::stod(token);
                std::getline(ss, token, ',');
                pose.orientation.y = std::stod(token);
                std::getline(ss, token, ',');
                pose.orientation.z = std::stod(token);
                std::getline(ss, token, ',');
                pose.orientation.w = std::stod(token);

                poses_.push_back(pose);
            } catch (const std::invalid_argument& e) {
                RCLCPP_ERROR(this->get_logger(), "Invalid argument while parsing line: %s", line.c_str());
                return false;
            } catch (const std::out_of_range& e) {
                RCLCPP_ERROR(this->get_logger(), "Out of range error while parsing line: %s", line.c_str());
                return false;
            }
        }

        return true;
    }

    double calculateTrajectoryLength(const moveit_msgs::msg::RobotTrajectory& trajectory) {
        double length = 0.0;
        const auto& points = trajectory.joint_trajectory.points;

        for (size_t i = 1; i < points.size(); ++i) {
            double segment_length = 0.0;
            for (size_t j = 0; j < points[i].positions.size(); ++j) {
                double delta = points[i].positions[j] - points[i-1].positions[j];
                segment_length += delta * delta;
            }
            length += std::sqrt(segment_length);
        }

        return length;
    }

    void printProgressBar(size_t current, size_t total) {
        int barWidth = 50;
        float progress = static_cast<float>(current) / total;

        std::cout << "[";
        int pos = static_cast<int>(barWidth * progress);
        for (int i = 0; i < barWidth; ++i) {
            if (i < pos) std::cout << "=";
            else if (i == pos) std::cout << ">";
            else std::cout << " ";
        }
        std::cout << "] " << int(progress * 100.0) << " %\r";
        std::cout.flush();
    }
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MoveItBenchmark>();

    if(node->performBenchmark()) {
        rclcpp::spin(node);
    }
    rclcpp::shutdown();
    return 0;
}

