#/bin/sh

# clone repo
cd $HOME/; git clone https://github.com/zfiggueroa/Suckless; clear

# rename
mv $HOME/Suckless/ $HOME/.suckless/

# dwm
cd $HOME/.suckless/dwm
sudo cp config.def.h config.h
sudo make clean install

# dmenu
cd $HOME/.suckless/dmenu
sudo cp config.def.h config.h
sudo make clean install

# dwmblocks
cd $HOME/.suckless/dwmblocks
sudo cp config.def.h config.h
sudo make clean install

# st
cd $HOME/.suckless/st
sudo cp config.def.h config.h
sudo make clean install

# modules
cd $HOME/.suckless/modules/; ls | grep -v resources | grep -v readme.md | xargs -I {} chmod -R +x {}

# xsession
sudo mv $HOME/.suckless/xsession /usr/share/xsessions/dwm-session.desktop

# autorun
chmod +x $HOME/.suckless/autostart

# notify user
notify-send -t 0 "suckless installation completed"
