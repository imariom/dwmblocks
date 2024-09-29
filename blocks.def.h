static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/		/*Update Signal*/
	{"", 		"upddates",		60,						0},
	{"", 		"memory",		5,						0},
	{"", 		"forecast",		60,						0},
	{"", 		"nettraf",		5,						0},
	{"", 		"internet",		5,						0},
	{"", 		"volume",		5,						0},
	{"", 		"clock",		10,						0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
