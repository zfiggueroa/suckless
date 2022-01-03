#/bin/sh

# download files
cd $HOME/; git clone https://github.com/zfiggueroa/dwm-patched; clear
mv $HOME/dwm-patched $HOME/.dwm; rm -rf $HOME/.dwm/.git/

# dwm
cd $HOME/.dwm/dwm
sudo cp config.def.h config.h
sudo make clean install

# dwmblocks
cd $HOME/.dwm/dwmblocks
sudo cp blocks.def.h blocks.h
sudo make clean install

# dmenu
cd $HOME/.dwm/dmenu
sudo cp config.def.h config.h
sudo make clean install

# st
cd $HOME/.dwm/st
sudo cp config.def.h config.h
sudo make clean install

# binaries
chmod -R +x $HOME/.dwm/modules/*

# autorun
chmod +x $HOME/.dwm/autostart
