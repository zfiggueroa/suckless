## MODULES
Modules made from scratch:

- [x] news
- [x] calendar
- [x] memory
- [x] volume
- [x] internet

## 📰 NEWS FEED
**Name:** news<br/>
**Dependencies:** newsboat<br/>
**Status:**<br/>
```diff
+ Working
```
**Usage:**<br/>
* `Button1: update news`
* `Button2: edit module`
* `Button3: open newsboat`
## 💻 MEMORY USAGE
**Name:** memory<br/>
**Dependencies:** none<br/>
**Status:**<br/>
```diff
+ Working
```
**Usage:**<br/>
* `Button1: open top`
* `Button2: edit module`
* `Button3: show free space`

## 🗓️ TIME & DATE
**Name:** calendar<br/>
**Dependencies:** none<br/>
**Status:**<br/>
```diff
+ Working
```
**Usage:**<br/>
* `Button1: show timezone (timedatectl)`
* `Button2: edit module`
* `Button3: show calendar`

## 📢 VOLUME
**Name:** volume<br/>
**Dependencies:** paximer, cmus (optional)<br/>
**Status:**<br/>
```diff
+ Working
```
**Usage:**<br/>
* `modkey + F12: increase volume`
* `modkey + F11: decrease volume`
* `modkey + F10: open cmus (music player)`
* `modkey + F9:  toogle mute`
* `Button1: toogle mute`
* `Button2: edit module`
* `Button3: display audio sinks`

*Music player keybind can be changed to use another player*.

`{ MODKEY,				XK_F10,		spawn,			SHCMD("st -e cmus") },`

## 🗺️ NETWORK DEVICES
**Name:** internet<br/>
**Dependencies:** nm-connection-editor<br/>
**Status:**<br/>
```diff
+ Working
```
**Usage:**<br/>
* `Button1: show current connection`
* `Button2: edit module`
* `Button3: edit network`

*Every other module integrated still 'work in progress', im rewriting every module from scratch for official support.*
