//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.local/bin/sb-memory",	30,		0},
	{"", "~/.local/bin/sb-wifi",	60,		0},
	{"", "~/.local/bin/sb-battery",	60,	0},
	{"", "~/.local/bin/sb-volume",	0,	11},
	{"", "~/.local/bin/sb-clock",	60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 3;
