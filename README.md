# Installation 

sudo apt install curl

curl "https://raw.githubusercontent.com/Maaliiik/interbotix_arm_project/emse/install.sh" > install.sh

chmod +x install.sh

./install.sh -p ~/interbotix_project

## Installation checks

```bash
source /opt/ros/humble/setup.bash
source ~/interbotix_ws/install/setup.bash
ros2 pkg list | grep interbotix
ros2 pkg list | grep emse 
```
