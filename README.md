# 3DPlots

# Install xLaunch on windows.. 

settings:
multiple
display num 0 (maybe -1. cant remember)
start no client
uncheck native opengl
check disable access control

# install wsl on windows
-- https://docs.microsoft.com/en-us/windows/wsl/install

# Things to install on Ubuntu
```
   sudo apt install gedit -y
   sudo apt install gimp -y
   sudo apt install nautilus -y
   sudo apt install x11-apps -y
    
    
   sudo wget https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb
   sudo dpkg -i google-chrome-stable_current_amd64.deb
   sudo apt install --fix-broken -y
   sudo dpkg -i google-chrome-stable_current_amd64.deb
   
   sudo apt install ubuntu-desktop mesa-utils
   
   sudo apt-get install cmake
  ```    
# Test your GL stuff
```
glxinfo -B
glxgears
```
//should open a small window with gears spinning


# download qt stuff
google download qt-unified-linux-x64-4.3.0-1-online.run

install qt5.15.2

# git repo

create a code folder and get the repo
```
git clone https://github.com/camdingo/3DPlots.git
```

# Env variables
add this to ~/.bashrc

```                                               
HOST_IP=$(host `hostname` | grep -oP '(\s)\d+(\.\d+){3}' | tail -1 | awk '{ print $NF }' | tr -d '\r')                  
export LIBGL_ALWAYS_INDIRECT=0                                                                                          
export DISPLAY=$HOST_IP:0.0                                                                                             
export NO_AT_BRIDGE=1                                                                                                   
export PULSE_SERVER=tcp:$HOST_IP
```
