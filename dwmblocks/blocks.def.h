//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
/*	{"",		"nettraf",		1,					0},			   */
	{"",		"news",			600,				0},
	{"", 		"memory",		2,					0},
	{"",		"clock",		60,					0},
	{"",		"volume",		1,					0},
/*	{"",		"internet",		10,					0},			   */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
