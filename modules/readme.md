## MODULES
Modules made from scratch:

	* news
	* clock
	* memory
	* volume

## 📰 NEWS FEED
**Name:** news

**Dependencies:** newsboat

**Status:** 
```diff
+ Working
```

**Usage:**

		* Button1: update module
		* Button2: edit module
		* Button3: open newsboat

⛔ **Known issue:** news module takes too long to update feeds.

⚠️ **Cause:** newsboat is not loading feeds fast enough or there are too many feeds to update.

✅ **Fix:**

		* increase the number of threads newsboat loads at once 'reload-threads 10'
		* reduce the number of feeds inside '~/.newsboat/urls'
		* read '~/.newsboat/error.log' for more feedback

⛔ **Known issue:** news module displays " Error:" when right clicking on it.

⚠️ **Cause:** 'Error: an instance of Newsboat is already running (PID: XXXX)'

✅ **Fix:**

		* Close other newsboat instances before '$ killall newsboat'
## 💻 MEMORY USAGE

**Name:** memory

**Dependencies:** none

**Status:**
```diff
+ Working
```

**Usage:**

		* Button1: n/a
		* Button2: edit module
		* Button3: n/a

## 🗓️ CALENDAR
**Name:** clock

**Dependencies:** none

**Status:**
```diff
+ Working
```

**Usage:**

		* Button1: n/a
		* Button2: edit module
		* Button3: update module

## 📢 VOLUME
**Name:** volume

**Dependencies:** paximer, cmus (optional)

**Status:**
```diff
+ Working
```

**Usage:**

		* modkey + F12 increase volume
		* modkey + F11 decrease volume
		* modkey + F10 open cmus (music player)
		* modkey + F9  toogle mute

		* Button1: toogle mute
		* Button2: edit module
		* Button3: display audio sinks

*Music player keybind can be changed to use another player*

`{ MODKEY,				XK_F10,		spawn,			SHCMD("st -e cmus") },`

## 🗺️ NETWORK TRAFFIC
**Name:** nettraf

**Dependencies:** none

**Status:**
```diff
- Ported
```

**Usage:**

		* Button1: n/a
		* Button2: n/a
		* Button3: n/a

*Every other module integrated still 'work in progress', im rewriting every module from scratch for official support.*
