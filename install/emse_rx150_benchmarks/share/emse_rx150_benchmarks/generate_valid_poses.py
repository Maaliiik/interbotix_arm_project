import csv
import random
import math

# Define the volume of interest (bounding box)
x_bounds = (0.05, 0.25)
y_bounds = (0.05, 0.2)
z_bounds = (0.05, 0.2)

# Number of random poses to generate
num_poses = 100

# Function to generate a random normalized quaternion
def generate_random_quaternion():
    u1 = random.random()
    u2 = random.random()
    u3 = random.random()

    qx = math.sqrt(1 - u1) * math.sin(2 * math.pi * u2)
    qy = math.sqrt(1 - u1) * math.cos(2 * math.pi * u2)
    qz = math.sqrt(u1) * math.sin(2 * math.pi * u3)
    qw = math.sqrt(u1) * math.cos(2 * math.pi * u3)

    return qx, qy, qz, qw

# Function to generate random poses
def generate_random_pose():
    qx, qy, qz, qw = generate_random_quaternion()
    pose = {
        'position_x': round(random.uniform(*x_bounds), 2),
        'position_y': round(random.uniform(*y_bounds), 2),
        'position_z': round(random.uniform(*z_bounds), 2),
        'orientation_x': round(qx, 2),
        'orientation_y': round(qy, 2),
        'orientation_z': round(qz, 2),
        'orientation_w': round(qw, 2)
    }
    return pose

# Generate poses and save to CSV
poses = [generate_random_pose() for _ in range(num_poses)]

with open('random_poses2.csv', 'w', newline='') as csvfile:
    fieldnames = poses[0].keys()
    writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
    
    writer.writeheader()
    for pose in poses:
        writer.writerow(pose)

print(f"Generated {num_poses} random poses and saved to random_poses2.csv")

