static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/		/*Update Signal*/
	{"", 		"cpu",			10,						0},
	{"", 		"memory",		10,						0},
	{"", 		"nettraf",		10,						0},
	{"", 		"updates",		60,						0},
	{"", 		"internet",		10,						0},
	{"", 		"volume",		5,						0},
	{"", 		"clock",		60,						0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
