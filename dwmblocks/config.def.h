const Block blocks[] = {
	// kill = n + 34
	//BLOCK("nettraf",	1,		1),
	BLOCK("news",		900,	2),
	BLOCK("memory",		1,		3),
	BLOCK("calendar",	60,		4),
	BLOCK("volume",		0,		5),
};

// Maximum possible length of output from block, expressed in number of characters.
#define CMDLENGTH 80

// The status bar's delimiter which appears in between each block.
#define DELIMITER " | "

// Adds a leading delimiter to the statusbar, useful for powerline.
#define LEADING_DELIMITER

// Enable clickability for blocks. Needs `dwm` to be patched appropriately.
// See the "Clickable blocks" section below.
#define CLICKABLE_BLOCKS
