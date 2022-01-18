## modules
Modules made from scratch:
	* news
	* clock
	* memory
	* volume

## news feed
Name: news
Dependencies: newsboat
Status: Working

Usage:
		* Button1: update module
		* Button2: edit module
		* Button3: open newsboat

Known issue: news module takes too long to update feeds.
Cause: newsboat is not loading feeds fast enough or there are too many feeds to update.
Fix:	* increase the number of threads newsboat loads at once 'reload-threads 10'
		* reduce the number of feeds inside '~/.newsboat/urls'
		* read '~/.newsboat/error.log' for more feedback

Known issue: news module displays " Error:" when right clicking on it.
Cause: 'Error: an instance of Newsboat is already running (PID: XXXX)'
Fix: Close other newsboat instances before '$ killall newsboat'

## memory usage
Name: memory
Dependencies: none
Status: Working

Usage:
		* Button1: n/a
		* Button2: edit module
		* Button3: n/a

## clock and date
Name: clock
Dependencies: none
Status: Working

Usage:
		* Button1: n/a
		* Button2: edit module
		* Button3: update module

## volume control
Name: volume
Dependencies: paximer, cmus (optional)
Status: Working

Usage:
		* modkey + F12 increase volume
		* modkey + F11 decrease volume
		* modkey + F10 open cmus (music player)
		* modkey + F9  toogle mute

		* Button1: toogle mute
		* Button2: edit module
		* Button3: display audio sinks

Music player keybind can be changed inside '.dwm/dwm/config.def.h' to use another player

'{ MODKEY,				XK_F10,		spawn,			SHCMD("st -e cmus") },'

## network traffic
Name: nettraf
Dependencies: none
Status: Ported

Usage:
		* Button1: n/a
		* Button2: n/a
		* Button3: n/a

Every other module integrated still on 'work in progress', im working rewriting each module from scratch for official support.
