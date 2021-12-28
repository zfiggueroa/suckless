## dwm-patched

custom dwm commit

## dependencies

* xsetroot
* pamixer
* cmus
* networkmanager
* networkmanager-openvpn

## install

compile suckless software under ~/.dwm

`sudo cp config.diff.h config.h`

`sudo make clean install`

## demenu-items

`ls -c /usr/bin/mybin $HOME/.dwm/dmenu-items/mybin`

## autostart

`chmod +x $HOME/.dwm/autostart.sh`

## xsession

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
### patches included

> dmenu

[dmenu-grid-4.9.diff](https://tools.suckless.org/dmenu/patches/grid/dmenu-grid-4.9.diff)

[dmenu-center-20200111-8cd37e1.diff](https://tools.suckless.org/dmenu/patches/center/dmenu-center-20200111-8cd37e1.diff)

> dwm

[dwm-notitle-6.2.diff](https://dwm.suckless.org/patches/notitle/dwm-notitle-6.2.diff)

[dwm-fullgaps-6.2.diff](https://dwm.suckless.org/patches/fullgaps/dwm-fullgaps-6.2.diff)

[dwm-barpadding-6.2.diff](https://dwm.suckless.org/patches/barpadding/dwm-barpadding-6.2.diff)

[dwm-switchtotag-6.2.diff](https://dwm.suckless.org/patches/switchtotag/dwm-switchtotag-6.2.diff)

[dwm-floatrules-20210801-138b405.diff](https://dwm.suckless.org/patches/floatrules/dwm-floatrules-20210801-138b405.diff)

> st

[st-iso14755-0.8.3.diff](https://st.suckless.org/patches/iso14755/st-iso14755-0.8.3.diff)
