## MODULES
Modules made from scratch:

- [x] news
- [x] clock
- [x] memory
- [x] volume
- [ ] nettraf

## π° NEWS FEED
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
## π» MEMORY USAGE
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

## ποΈ TIME & DATE
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

## π’ VOLUME
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

## πΊοΈ NETWORK TRAFFIC
**Name:** nettraf<br/>
**Dependencies:** none<br/>
**Status:**<br/>
```diff
+ Ported
```
**Usage:**<br/>
* `Button1: downloaded data`
* `Button2: edit module`
* `Button3: network-devices`

*Every other module integrated still 'work in progress', im rewriting every module from scratch for official support.*
