#!/bin/bash
# wallpaper
~/.fehbg &

# statusbar
$HOME/.dwm/dwm-bar/dwm_bar.sh &

# st
/usr/local/bin/st -e /bin/bash --login &

# fm
pcmanfm &

# numlock
numlockx &

# dwm
exec dwm
