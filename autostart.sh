#!/bin/sh
# wallpaper
~/.fehbg &

# dwmblocks
export PATH="$PATH:$HOME/.dwm/modules"; dwmblocks &

# st
/usr/local/bin/st -e /bin/sh --login &

# fm
pcmanfm &

# numlock
numlockx &

# loop
#while true; do
#	dwm 2>/dev/null
#done

# dwm
exec dwm
