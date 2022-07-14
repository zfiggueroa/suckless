// See LICENSE file for copyright and license details.

#include <X11/XF86keysym.h>

// appearance
static const unsigned int borderpx	= 0;	// border pixel of windows
static const unsigned int gappx		= 10;	// gaps between windows
static const unsigned int snap		= 32;	// snap pixel
static const int showbar			= 1;	// 0 means no bar
static const int topbar				= 1;	// 0 means bottom bar
static const char *fonts[]			= {"monospace:size=10","Font Awesome 6 Free:style=Solid:pixelsize=10:antialias=true"};
static const char dmenufont[]		= "monospace:size=10";
static const char col_gray1[]		= "#202020";
static const char col_gray2[]		= "#272727";
static const char col_gray3[]		= "#ffffff";
static const char col_gray4[]		= "#ffffff";
static const char col_cyan[]		= "#8db4d1";
static const char *colors[][3]		= {
	//				 fg			bg		   border
	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
	[SchemeSel]  = { col_gray4, col_cyan,  col_cyan  },
};

// tagging	https://fontawesome.com/search?m=free&s=solid%2Cbrands

static const char *tags[] = { "","","","","","","","",""};

static const Rule rules[] = {
	/* xprop(1):
	* WM_CLASS(STRING) = instance, class
	* WM_NAME(STRING) = title
	* class			instance	title			mask		switch	isfloating	 monitor */
	{ "st",			NULL,		"lf",			1 << 1,		1,		0,			-1 },
	{ "Pcmanfm",	NULL,		NULL,			1 << 1,		1,		0,			-1 },
	{ "feh",		NULL,		NULL,			1 << 1,		1,		0,			-1 },
	{ "mpv",		NULL,		NULL,			1 << 2,		1,		1,			-1 },
	{ "st",			NULL, 		"cmus",			1 << 3,		1,		0,			-1 },
	{ "retroarch",	NULL,		NULL,			1 << 4,		1,		0,			-1 },
	{ NULL,			"Steam",	NULL,			1 << 4,		1,		0,			-1 },
	{ "firefox",	NULL,		NULL,			1 << 5,		1,		0,			-1 },
	{ "st",			NULL,		"vim",			1 << 6,		1,		0,			-1 },
	{ NULL,			"geany",	NULL,			1 << 6,		1,		0,			-1 },
	{ NULL,			NULL, 		"BleachBit",	1 << 7,		1,		0,			-1 },
	{ "AQEMU",		NULL,		NULL,			1 << 7,		1,		0,			-1 },
	{ "Qemu-",		NULL,		NULL,			1 << 8,		1,		0,			-1 },
	{ "st",			NULL,		"newsboat",		1 << 8,		1,		0,			-1 },
	{ "st",			NULL,		"/bin/sh",		0,			1,		0,			-1 },
	{ "CoreShot",	NULL,		NULL,			0,			0,		1,			-1 },
	{ "SimpleScre",	NULL,		NULL,			0,			0,		1,			-1 },
	{ "Nm-connect",	NULL,		NULL,			0,			0,		1,			-1 },
};

// layout(s)
static const float mfact	 = 0.55;	// factor of master area size [0.05..0.95]
static const int nmaster	 = 1;		// number of clients in master area
static const int resizehints = 1;		// 1 means respect size hints in tiled resizals

static const Layout layouts[] = {
	// symbol	arrange function
	{ "|",		tile },
	{ "-",		NULL },
	{ "m",		monocle },
};

// key definitions
#define MODKEY Mod1Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,						KEY,	view,		{.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,			KEY,	toggleview,	{.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,				KEY,	tag,		{.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask,	KEY,	toggletag,	{.ui = 1 << TAG} },

// dwmblocks
#define STATUSBAR "dwmblocks"

// shell command helper
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

// commands
static char dmenumon[2] = "0"; // component of dmenucmd, manipulated in spawn()
static const char *dmenucmd[] = { "dmenu_run", "-c", "-m", dmenumon, "-fn", dmenufont, "-nb", col_gray1, "-nf", col_gray3, "-sb", col_cyan, "-sf", col_gray4, NULL };

static Key keys[] = {
	// modifier				key			function		argument
	{ MODKEY,				XK_F12,		spawn,			SHCMD("pamixer --allow-boost -i 5; kill -39 $(pidof dwmblocks)") },
	{ MODKEY,				XK_F11,		spawn,			SHCMD("pamixer --allow-boost -d 5; kill -39 $(pidof dwmblocks)") },
	{ MODKEY,				XK_F9,		spawn,			SHCMD("pamixer -t; kill -39 $(pidof dwmblocks)") },
	{ MODKEY,				XK_F10,		spawn,			SHCMD("st -e cmus") },
	{ MODKEY|ShiftMask,		XK_Return,	spawn,			SHCMD("st -e /bin/sh --login") },
	{ 0,					XK_Print,	spawn,          SHCMD("coreshot") },
	{ MODKEY,				XK_Print,	spawn,          SHCMD("simplescreenrecorder") },
	{ MODKEY,				XK_space,	spawn,			SHCMD("dunstctl close-all") },
	{ MODKEY,				XK_p,		spawn,			{.v = dmenucmd } },
	{ MODKEY,				XK_b,		togglebar,		{0} },
	{ MODKEY,				XK_j,		focusstack,		{.i = +1 } },
	{ MODKEY,				XK_k,		focusstack,		{.i = -1 } },
	{ MODKEY,				XK_i,		incnmaster,		{.i = +1 } },
	{ MODKEY,				XK_d,		incnmaster,		{.i = -1 } },
	{ MODKEY,				XK_h,		setmfact,		{.f = -0.05} },
	{ MODKEY,				XK_l,		setmfact,		{.f = +0.05} },
	{ MODKEY,				XK_Return,	zoom,			{0} },
	{ MODKEY,				XK_Tab,		view,			{0} },
	{ MODKEY|ShiftMask,		XK_c,		killclient,		{0} },
	{ MODKEY,				XK_t,		setlayout,		{.v = &layouts[0]} },
	{ MODKEY,				XK_f,		setlayout,		{.v = &layouts[1]} },
	{ MODKEY,				XK_m,		setlayout,		{.v = &layouts[2]} },
	//{ MODKEY,				XK_space,	setlayout,		{0} },
	//{ MODKEY|ShiftMask,	XK_space,	togglefloating,	{0} },
	{ MODKEY,				XK_0,		view,			{.ui = ~0 } },
	{ MODKEY|ShiftMask,		XK_0,		tag,			{.ui = ~0 } },
	{ MODKEY,				XK_comma,	focusmon,		{.i = -1 } },
	{ MODKEY,				XK_period,	focusmon,		{.i = +1 } },
	{ MODKEY|ShiftMask,		XK_comma,	tagmon,			{.i = -1 } },
	{ MODKEY|ShiftMask,		XK_period,	tagmon,			{.i = +1 } },
	{ MODKEY,				XK_minus,	setgaps,		{.i = -1 } },
	{ MODKEY,				XK_equal,	setgaps,		{.i = +1 } },
	{ MODKEY|ShiftMask,		XK_equal,	setgaps,		{.i = 0  } },
	TAGKEYS(				XK_1,						0)
	TAGKEYS(				XK_2,						1)
	TAGKEYS(				XK_3,						2)
	TAGKEYS(				XK_4,						3)
	TAGKEYS(				XK_5,						4)
	TAGKEYS(				XK_6,						5)
	TAGKEYS(				XK_7,						6)
	TAGKEYS(				XK_8,						7)
	TAGKEYS(				XK_9,						8)
	{ MODKEY|ShiftMask,		XK_q,		quit,			{0} },
};

/* button definitions
 * click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	// click event		mask	button		function		argument
	{ ClkLtSymbol,		0,		Button1,	setlayout,		{0} },
	{ ClkLtSymbol,		0,		Button3,	setlayout,		{.v = &layouts[2]} },
	{ ClkStatusText,	0,		Button1,	sigstatusbar,	{.i = 1} },
	{ ClkStatusText,	0,		Button2,	sigstatusbar,	{.i = 2} },
	{ ClkStatusText,	0,		Button3,	sigstatusbar,	{.i = 3} },
	{ ClkClientWin,		MODKEY,	Button1,	movemouse,		{0} },
	{ ClkClientWin,		MODKEY,	Button2,	togglefloating,	{0} },
	{ ClkClientWin,		MODKEY,	Button3,	resizemouse,	{0} },
	{ ClkTagBar,		0,		Button1,	view,			{0} },
	{ ClkTagBar,		0,		Button3,	toggleview,		{0} },
	{ ClkTagBar,		MODKEY,	Button1,	tag,			{0} },
	{ ClkTagBar,		MODKEY,	Button3,	toggletag,		{0} },
};
