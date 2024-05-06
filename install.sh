
#!/bin/bash

OFF='\033[0m'
RED='\033[0;31m'
GRN='\033[0;32m'
BLU='\033[0;34m'

BOLD=$(tput bold)
NORM=$(tput sgr0)

ERR="${RED}${BOLD}"
RRE="${NORM}${OFF}"

PROMPT="> "

INSTALL_PATH=~/interbotix_ws
NONINTERACTIVE=false

_usage="${BOLD}USAGE: ./xsarm_amd64_install.sh [-h][-p PATH][-n]${NORM}

Install the Interbotix X-Series Arms packages and their dependencies.

Options:

  -h              Display this help message and quit

 

  -p PATH         Sets the absolute install location for the Interbotix workspace. If not specified,
                  the Interbotix workspace directory will default to '~/interbotix_ws'.

  -n              Install all packages and dependencies without prompting. This is useful if
                  you're running this script in a non-interactive terminal like when building a
                  Docker image.

Examples:

  ./xsarm_amd64_install.sh ${BOLD}-h${NORM}
    This will display this help message and quit.

  ./xsarm_amd64_install.sh
    This will install just the humble ROS 2 distro and all the necessary packages to run the project.


  ./xsarm_amd64_install.sh ${BOLD}-n${NORM}
    Skip prompts and install all packages and dependencies.


  ./xsarm_amd64_install.sh ${BOLD}-p ~/custom_ws${NORM}
    Installs the Interbotix packages under the '~/custom_ws' path."
    


    
function install_essential_packages() {
  # Install necessary core packages
  sudo apt-get install -yq curl git
  sudo apt-get install -yq python3-pip
  python3 -m pip install modern_robotics
  sudo pip3 install transforms3d

}    
    
    

function install_ros2() {
  # Install ROS 2 humble
  if [ "$(dpkg-query -W -f='${Status}' ros-humble-desktop 2>/dev/null | grep -c "ok installed")" -eq 0 ]; then
    echo -e "${GRN}Installing ROS 2 humble desktop...${OFF}"
    sudo apt-get install -yq      \
      software-properties-common  \
      gnupg
    sudo add-apt-repository -y universe
    sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
    echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(source /etc/os-release && echo "$UBUNTU_CODENAME") main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
    sudo apt-get update
    sudo apt-get install -yq ros-humble-desktop
    echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc
  else
    echo "ros-humble-desktop-full is already installed!"
  fi
  source /opt/ros/humble/setup.bash

  # Install rosdep and other necessary tools
  sudo apt-get install -yq            \
    python3-rosdep                    \
    python3-rosinstall                \
    python3-rosinstall-generator      \
    python3-wstool                    \
    build-essential                   \
    python3-colcon-common-extensions

  # Remove sources if they exist
  if [ -f /etc/ros/rosdep/sources.list.d/20-default.list ]; then
    sudo rm /etc/ros/rosdep/sources.list.d/20-default.list
  fi

  # Initialize rosdep sources
  sudo rosdep init

  # Update local rosdep database, including EoL distros
  rosdep update --include-eol-distros

}



function install_emse_interbotix_packages() {
  if source /opt/ros/humble/setup.bash 2>/dev/null && \
     source "$INSTALL_PATH"/install/setup.bash 2>/dev/null && \
     ros2 pkg list | grep -q interbotix_;
  then
    echo "Interbotix Arm ROS 2 packages already installed!"
  else
    echo -e "${GRN}Installing ROS 2 packages for the Interbotix Arm...${OFF}"
    cd humble/src
    git clone -b humble https://github.com/Interbotix/interbotix_ros_core.git
    git clone -b humble https://github.com/Interbotix/interbotix_ros_manipulators.git
    git clone -b humble https://github.com/Interbotix/interbotix_ros_toolboxes.git
    git clone -b emse https://github.com/Maaliiik/interbotix_arm_project.git
# TODO : je retire certains fichiers plus tard
  rm                                                                                                  \
      interbotix_ros_toolboxes/interbotix_common_toolbox/interbotix_moveit_interface/COLCON_IGNORE      \
      interbotix_ros_toolboxes/interbotix_common_toolbox/interbotix_moveit_interface_msgs/COLCON_IGNORE
      
    cd interbotix_ros_core
    git submodule update --init interbotix_ros_xseries/dynamixel_workbench_toolbox
    git submodule update --init interbotix_ros_xseries/interbotix_xs_driver
    cd "$INSTALL_PATH"/src
    cd interbotix_ros_core/interbotix_ros_xseries/interbotix_xs_sdk
    sudo cp 99-interbotix-udev.rules /etc/udev/rules.d/
    sudo udevadm control --reload-rules && sudo udevadm trigger
    cd "$INSTALL_PATH"
    rosdep install --from-paths src --ignore-src -r -y
    if colcon build; then
      echo -e "${GRN}${BOLD}Interbotix Arm ROS 2 Packages built successfully!${NORM}${OFF}"
      echo "source $INSTALL_PATH/install/setup.bash" >> ~/.bashrc
      source "$INSTALL_PATH"/install/setup.bash
    else
      failed "Failed to build Interbotix Arm ROS 2 Packages."
    fi
  fi






:'

function install_emse_interbotix_packages() {
  # Install Arm packages
  if source /opt/ros/"$ROS_DISTRO_TO_INSTALL"/setup.bash 2>/dev/null && \
     source "$INSTALL_PATH"/install/setup.bash 2>/dev/null && \
     ros2 pkg list | grep -q interbotix_;
  then
    echo "Interbotix Arm ROS 2 packages already installed!"
  else
    echo -e "${GRN}Installing ROS 2 packages for the Interbotix Arm...${OFF}"
    cd "$INSTALL_PATH"
    git clone -b master https://github.com/Maaliiik/interbotix_arm_project.git
    

    #git clone -b ros2 https://github.com/ros-planning/moveit_visual_tools.git 
    cd src/interbotix

    cd interbotix_ros_core/interbotix_ros_xseries/interbotix_xs_sdk
    sudo cp 99-interbotix-udev.rules /etc/udev/rules.d/
    sudo udevadm control --reload-rules && sudo udevadm trigger
    cd "$INSTALL_PATH"
    rosdep install --from-paths src --ignore-src -r -y
    if colcon build; then
      echo -e "${GRN}${BOLD}Interbotix Arm ROS 2 Packages built successfully!${NORM}${OFF}"
      echo "source $INSTALL_PATH/install/setup.bash" >> ~/.bashrc
      source "$INSTALL_PATH"/install/setup.bash
    else
      failed "Failed to build Interbotix Arm ROS 2 Packages."
    fi
  fi
  
}
'


function setup_env_vars() {
  # Set up Environment Variables
  if [ -z "$ROS_IP" ]; then
    echo -e "${GRN}Setting up Environment Variables...${OFF}"
    echo 'export ROS_IP=$(echo `hostname -I | cut -d" " -f1`)' >> ~/.bashrc
    echo -e 'if [ -z "$ROS_IP" ]; then\n\texport ROS_IP=127.0.0.1\nfi' >> ~/.bashrc
  else
    echo "Environment variables already set!"
  fi
}

   

function failed() {
  # Log error and quit with a failed exit code
  echo -e "${ERR}[ERROR] $1${RRE}"
  echo -e "${ERR}[ERROR] Interbotix Installation Failed!${RRE}"
  exit 1
}

   
    
    function help() {
  # print usage
  cat << EOF
$_usage
EOF
}


# parse command line arguments
while getopts 'hnp:' OPTION;
do
  case "$OPTION" in
    h) help && exit 0;;
    n) NONINTERACTIVE=true;;
    p) INSTALL_PATH="$OPTARG";;
    *) echo "Unknown argument $OPTION" && help && exit 0;;
  esac
done

help 

shift "$((OPTIND -1))"


if ! command -v lsb_release &> /dev/null; then
  sudo apt-get update
  sudo apt-get install -yq lsb-release
fi

UBUNTU_VERSION="$(lsb_release -rs)"
#UBUNTU_VERSION="18.04"

echo "Voici la version ubuntu : ${UBUNTU_VERSION}"


if [ "$UBUNTU_VERSION" == "22.04" ]; then
    echo "${BOLD}La version Ubuntu est compatible, les packages seront installes.${NORM}"
else 
    echo -e "${BOLD}${RED}Unsupported Ubuntu version: $UBUNTU_VERSION.${NORM}${OFF}"
    failed "Interbotix Arm only works with Ubuntu 22.04 Jammy on your hardware."
fi 

echo -e "${BLU}${BOLD}INSTALLATION SUMMARY:"
echo -e "\tROS Distribution:           ROS 2 Humble"
echo -e "\tInstallation path:          ${INSTALL_PATH}"

if [ "$NONINTERACTIVE" == false ]; then
   echo -e "\nIs this correct?\n${PROMPT}${NORM}${OFF}\c"
   read -r resp
   

   if [[ "$resp" == [yY] || "$resp" == [yY][eE][sS] ]]; then
      :
   else 
      help 
      exit 0 
   fi 
      
fi 

echo -e "\n\n"
echo -e "${GRN}${BOLD}**********************************************${NORM}${OFF}"
echo ""
echo -e "${GRN}${BOLD}            Starting installation!            ${NORM}${OFF}"
echo -e "${GRN}${BOLD}   This process may take around 7 Minutes!   ${NORM}${OFF}"
echo ""
echo -e "${GRN}${BOLD}**********************************************${NORM}${OFF}"
echo -e "\n\n"
   


sleep 4
start_time="$(date -u +%s)"

echo -e "\n# Interbotix Configurations" >> ~/.bashrc

# Update the system
sudo apt-get update && sudo apt-get -y upgrade
sudo apt-get -y autoremove

install_essential_packages

mkdir -p "$INSTALL_PATH"

shopt -s extglob


install_ros2
install_emse_interbotix_packages


setup_env_vars

shopt -u extglob

end_time="$(date -u +%s)"
elapsed="$((end_time-start_time))"

echo -e "${GRN}Installation complete, took $elapsed seconds in total.${OFF}"
echo -e "${GRN}NOTE: Remember to reboot the computer before using the robot!${OFF}"






























