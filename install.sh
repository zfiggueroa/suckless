#/bin/sh

# clone repo
cd $HOME/.local/; git clone https://github.com/zfiggueroa/suckless; clear

# dwm
cd $HOME/.local/suckless/dwm
sudo cp config.def.h config.h
sudo make clean install

# dmenu
cd $HOME/.local/suckless/dmenu
sudo cp config.def.h config.h
sudo make clean install

# dwmblocks
cd $HOME/.local/suckless/dwmblocks
sudo cp config.def.h config.h
sudo make clean install

# st
cd $HOME/.local/suckless/st
sudo cp config.def.h config.h
sudo make clean install

# modules
cd $HOME/.local/suckless/modules/; ls | grep -v resources | grep -v readme.md | xargs -I {} chmod -R +x {}

# xsession
sudo mv $HOME/.local/suckless/xsession /usr/share/xsessions/dwm-session.desktop

# autorun
chmod +x $HOME/.local/suckless/autostart

# notify user
dunstify -i appset -t 0 -r 9856 -a install "suckless installation completed"
