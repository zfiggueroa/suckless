## MODULES
Modules made from scratch:

- [x] news
- [x] clock
- [x] memory
- [x] volume
- [ ] nettraf

## 📰 NEWS FEED
**Name:** news<br/>
**Dependencies:** newsboat<br/>
**Status:**<br/>
```diff
+ Working
```
**Usage:**<br/>
* `Button1: update module`
* `Button2: edit module`
* `Button3: open newsboat`

⛔ **Known issue:** news module takes too long to update feeds.<br/>
⚠️ **Cause:** newsboat is not loading feeds fast enough or there are too many feeds to update.<br/>
✅ **Fix:**<br/>
```
		1) increase the number of threads newsboat loads at once 'reload-threads 10'
		2) reduce the number of feeds inside '~/.newsboat/urls'
		3) read '~/.newsboat/error.log' for more feedback
```
⛔ **Known issue:** news module displays " Error:" when right clicking on it.<br/>
⚠️ **Cause:** 'Error: an instance of Newsboat is already running (PID: XXXX)'<br/>
✅ **Fix:**<br/>
```
		1) Close other newsboat instances before '$ killall newsboat'
```
## 💻 MEMORY USAGE
**Name:** memory<br/>
**Dependencies:** none<br/>
**Status:**<br/>
```diff
+ Working
```
**Usage:**<br/>
* `Button1: n/a`
* `Button2: edit module`
* `Button3: n/a`

## 🗓️ CALENDAR
**Name:** clock<br/>
**Dependencies:** none<br/>
**Status:**<br/>
```diff
+ Working
```
**Usage:**<br/>
* `Button1: n/a`
* `Button2: edit module`
* `Button3: update module`

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

## 🗺️ NETWORK TRAFFIC
**Name:** nettraf<br/>
**Dependencies:** none<br/>
**Status:**<br/>
```diff
- Ported
```
**Usage:**<br/>
* `Button1: n/a`
* `Button2: n/a`
* `Button3: n/a`

*Every other module integrated still 'work in progress', im rewriting every module from scratch for official support.*
