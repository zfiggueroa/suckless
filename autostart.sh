#!/bin/bash
# wallpaper
~/.fehbg &

# dwmblocks
export PATH="$PATH:$HOME/.dwm/blocks"
dwmblocks &

# st
/usr/local/bin/st -e /bin/bash --login &

# fm
#pcmanfm &

# numlock
numlockx &

# dwm
exec dwm
