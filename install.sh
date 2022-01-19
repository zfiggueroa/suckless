#/bin/sh

# clone repo
cd $HOME/; git clone https://github.com/zfiggueroa/.dwm; clear

# dwm
cd $HOME/.dwm/dwm
sudo cp config.def.h config.h
sudo make clean install

# dmenu
cd $HOME/.dwm/dmenu
sudo cp config.def.h config.h
sudo make clean install

# dwmblocks
cd $HOME/.dwm/dwmblocks
sudo cp config.def.h config.h
sudo make clean install

# st
cd $HOME/.dwm/st
sudo cp config.def.h config.h
sudo make clean install

# binaries
cd $HOME/.dwm/modules/; ls | grep -v colors | grep -v readme.md | xargs -I {} chmod -R +x {}

# xsession
sudo mv $HOME/.dwm/xsession /usr/share/xsessions/dwm-session.desktop

# autorun
chmod +x $HOME/.dwm/autostart

# notify user
notify-send -t 0 "suckless install completed"
