**Custom patched [suckless](https://suckless.org/) environment ready to build and install.<br/>**
## 1. SOFTWARE
- [x] dwm
- [x] dmenu
- [x] st
- [x] dwmblocks
- [x] statusbar modules
- [ ] slock
- [ ] surf
- [ ] tabs
## 2. DEPENDENCIES
| Package          | Description                                      | Link
| ---              | ---                                              | ---
| dunst            | Customizable and lightweight notification-daemon | [🔗](https://archlinux.org/packages/community/x86_64/dunst/)
| ttf-font-awesome | Iconic font designed for Bootstrap               | [🔗](https://archlinux.org/packages/community/any/ttf-font-awesome/)
## 3. SCREENSHOTS
<img src="https://github.com/zfiggueroa/suckless/blob/main/screenshots/Screenshot_2022-07-14_11-23-38.png" width=70% height=70%>
<img src="https://github.com/zfiggueroa/suckless/blob/main/screenshots/Screenshot_2022-07-14_11-22-02.png" width=70% height=70%>
<img src="https://github.com/zfiggueroa/suckless/blob/main/screenshots/Screenshot_2022-07-14_11-22-19.png" width=70% height=70%>
<img src="https://github.com/zfiggueroa/suckless/blob/main/screenshots/Screenshot_2022-07-14_11-22-40.png" width=70% height=70%>

## 4. INSTALL
Save and run [this](https://raw.githubusercontent.com/zfiggueroa/.dwm/main/install.sh) install script (requires root privileges) or follow the instructions inside it.
### 4.1 XSESSION
This build is focused to use a display manager instead of `xorg-xinit`, use xsessions to login into dwm and `$HOME/.dwm/autostart` as run command script.

`/usr/share/xsessions/dwm-session.desktop`
```
[Desktop Entry]
Encoding=UTF-8
Name=dwm
Comment=Dynamic window manager
Exec=/$HOME/.dwm/autostart
Icon=dwm
Type=XSession
```
*recommended to install a [TUI display manager](https://github.com/nullgemm/ly) to keep a minimal desktop experience*

### 4.2 XINITRC
If you want to start dwm using `xorg-xinit` instead of a display manager edit your run command script.

`~/.xinitrc`
```
#!/bin/sh
export PATH="$PATH:$HOME/.dwm/modules"; dwmblocks &
exec dwm
```
## 5. PATCHES
### dmenu 5.0
[dmenu-grid-4.9.diff](https://tools.suckless.org/dmenu/patches/grid/dmenu-grid-4.9.diff)<br/>
[dmenu-center-20200111-8cd37e1.diff](https://tools.suckless.org/dmenu/patches/center/dmenu-center-20200111-8cd37e1.diff)<br/>
### dwm 6.2
[dwm-notitle-6.2.diff](https://dwm.suckless.org/patches/notitle/dwm-notitle-6.2.diff)<br/>
[dwm-fullgaps-6.2.diff](https://dwm.suckless.org/patches/fullgaps/dwm-fullgaps-6.2.diff)<br/>
[dwm-status2d-6.2.diff](https://dwm.suckless.org/patches/status2d/dwm-status2d-6.2.diff)<br/>
[dwm-switchtotag-6.2.diff](https://dwm.suckless.org/patches/switchtotag/dwm-switchtotag-6.2.diff)<br/>
[dwm-statuscmd-status2d-20210405-60bb3df.diff](https://dwm.suckless.org/patches/statuscmd/dwm-statuscmd-status2d-20210405-60bb3df.diff)<br/>
### st 0.8.5
[st-blinking_cursor-20211116-2f6e597.diff](https://st.suckless.org/patches/blinking_cursor/st-blinking_cursor-20211116-2f6e597.diff)<br/>
[st-iso14755-20180911-67d0cb6.diff](https://st.suckless.org/patches/iso14755/st-iso14755-20180911-67d0cb6.diff)<br/>
[st-nordtheme-0.8.2.diff](https://st.suckless.org/patches/nordtheme/st-nordtheme-0.8.2.diff)<br/>
[st-scrollback-20210507-4536f46.diff](https://st.suckless.org/patches/scrollback/st-scrollback-20210507-4536f46.diff)<br/>
### dwmblocks
[dwmblocks-statuscmd-20210402-96cbb45.diff](https://dwm.suckless.org/patches/statuscmd/dwmblocks-statuscmd-20210402-96cbb45.diff)<br/>

<div align="center">
    𝄽<br>
    Copyright © 2022 zFiggueroa
</div>
