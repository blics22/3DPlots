# 3DPlots
3DPlots

install xLaunch on windows.. 
run this
settings:
multiple
display num 0 (maybe -1. cant remember)
start no client
uncheck native opengl
check disable access control

install wsl on windows -- https://docs.microsoft.com/en-us/windows/wsl/install

crap i installed on the ubuntu instance

    6  sudo apt install gedit -y
    7  sudo apt install gimp -y
    8  sudo apt install nautilus -y
    9  sudo apt install x11-apps -y
    
    
   11  sudo wget https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb
   12  sudo dpkg -i google-chrome-stable_current_amd64.deb
   13  sudo apt install --fix-broken -y
   14  sudo dpkg -i google-chrome-stable_current_amd64.deb
   
  34  sudo apt install ubuntu-desktop mesa-utils
      
      
   171  sudo apt-get install cmake
      
Test your GL stuff
glxgears
//should open a small window with gears spinning


download qt stuff, google download qt-unified-linux-x64-4.3.0-1-online.run

install qt5.15.2

create a code folder and get the repo
git clone https://github.com/camdingo/3DPlots.git


add this to ~/.bashrc

# Get the IP Address of the Windows 10 Host and use it in Environment.                                                  
HOST_IP=$(host `hostname` | grep -oP '(\s)\d+(\.\d+){3}' | tail -1 | awk '{ print $NF }' | tr -d '\r')                  
export LIBGL_ALWAYS_INDIRECT=0                                                                                          
export DISPLAY=$HOST_IP:0.0                                                                                             
export NO_AT_BRIDGE=1                                                                                                   
export PULSE_SERVER=tcp:$HOST_IP
