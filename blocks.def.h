//Modify this file to change what commands output to your statusbar, and recompile using the make command.

#include "themes/uwu.h"

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ",                                 "~/.scripts/status/cpu",                                        3,      1},
	{"",                                 "~/.scripts/status/memory",                                     30,      2},
	{"",                                 "~/.scripts/status/network",                                    30,      3},
	{"",                                 "~/.scripts/status/clock",                                      30,      4},
//      {"",                                 "~/.scripts/status/",                                           30,      5},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 3;

