## DESCRIPTION
Custom [dwm](https://dwm.suckless.org/) window manager fully patched and ready to build.
## SCREENSHOT
![alt text](https://i.ibb.co/ncsWczB/Screenshot-2022-01-04-21-01-45.png)
[>> download background here <<](https://www.deviantart.com/caitaron/art/Holy-night-Narmaya-824000607)
## DEPENDENCIES
* xsetroot
* pamixer
* ttf-font-awesome
* any display manager ([Ly](https://github.com/nullgemm/ly) suggested)
## INSTALLATION
Download `install.sh` [here](https://raw.githubusercontent.com/zfiggueroa/dwm-patched/main/install.sh) then execute it as root `$ sudo sh install.sh`
## MANUAL (OPTIONAL)
If you want to manually install dwm, open `install.sh` on a text editor and follow the steps inside.
## XSESSION
We need to create an xsession in order to start dwm using a display manager.

`/usr/share/xsessions/dwm-session.desktop`
```
[Desktop Entry]
Encoding=UTF-8
Name=dwm
Comment=Dynamic window manager
Exec=/$HOME/.dwm/autostart.sh
Icon=dwm
Type=XSession
```
## .XINITRC
If you want to start `dwm` using `xorg-xinit` add it inside your init script

`~/.xinitrc`
```
#!/bin/sh
exec dwm
```
## PATCHES
### dmenu 5.0
[dmenu-grid-4.9.diff](https://tools.suckless.org/dmenu/patches/grid/dmenu-grid-4.9.diff)

[dmenu-center-20200111-8cd37e1.diff](https://tools.suckless.org/dmenu/patches/center/dmenu-center-20200111-8cd37e1.diff)

### dwm 6.2
[dwm-notitle-6.2.diff](https://dwm.suckless.org/patches/notitle/dwm-notitle-6.2.diff)

[dwm-fullgaps-6.2.diff](https://dwm.suckless.org/patches/fullgaps/dwm-fullgaps-6.2.diff)

[dwm-status2d-6.2.diff](https://dwm.suckless.org/patches/status2d/dwm-status2d-6.2.diff)

[dwm-switchtotag-6.2.diff](https://dwm.suckless.org/patches/switchtotag/dwm-switchtotag-6.2.diff)

### st 0.8.4
[st-iso14755-0.8.3.diff](https://st.suckless.org/patches/iso14755/st-iso14755-0.8.3.diff)
