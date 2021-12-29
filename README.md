## DESCRIPTION
Custom [dwm](https://dwm.suckless.org/) install ready to build, this follows the suckless [philosophy](https://suckless.org/philosophy/) so you have to manually install its components.
## DEPENDENCIES
* xsetroot
* pamixer
* networkmanager
* networkmanager-openvpn
## MAKE
`$ sudo cp config.diff.h config.h`

`$ sudo make clean install`
## FILE HIERARCHY
- $HOME
  - .dwm
    - dmenu
    - dmenu-items
    - dwm
    - dwm-bar
    - st
    - autostart.sh
## DMENU-ITEMS
> **Dmenu wil only fetch items inside `$HOME/.dwm/dmenu-items` it will prevent dmenu from catching all bins on the system, this was intended to achieve a better menu experience, to change this behavior edit `$HOME/.dwm/dmenu/dmenu_path`**

add new item (symlink):

`$ ln -s /usr/bin/mybin $HOME/.dwm/dmenu-items/mybin`
## AUTORUN
`$ chmod +x $HOME/.dwm/autostart.sh`

`$ chmod +x $HOME/.dwm/dwm-bar/dwm_bar.sh`
## XSESSION
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
## PATCHES

### dmenu

[dmenu-grid-4.9.diff](https://tools.suckless.org/dmenu/patches/grid/dmenu-grid-4.9.diff)

[dmenu-center-20200111-8cd37e1.diff](https://tools.suckless.org/dmenu/patches/center/dmenu-center-20200111-8cd37e1.diff)

### dwm

[dwm-notitle-6.2.diff](https://dwm.suckless.org/patches/notitle/dwm-notitle-6.2.diff)

[dwm-fullgaps-6.2.diff](https://dwm.suckless.org/patches/fullgaps/dwm-fullgaps-6.2.diff)

[dwm-barpadding-6.2.diff](https://dwm.suckless.org/patches/barpadding/dwm-barpadding-6.2.diff)

[dwm-switchtotag-6.2.diff](https://dwm.suckless.org/patches/switchtotag/dwm-switchtotag-6.2.diff)

[dwm-floatrules-20210801-138b405.diff](https://dwm.suckless.org/patches/floatrules/dwm-floatrules-20210801-138b405.diff)

### st

[st-iso14755-0.8.3.diff](https://st.suckless.org/patches/iso14755/st-iso14755-0.8.3.diff)
