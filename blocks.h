//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.local/scripts/blocks/sb-memory",	30,		0},
	{"", "~/.local/scripts/blocks/sb-wifi",	60,		0},
	{"", "~/.local/scripts/blocks/sb-battery",	60,	0},
	{"", "~/.local/scripts/blocks/sb-volume",	0,	11},
	{"", "~/.local/scripts/blocks/sb-clock",	60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 3;
