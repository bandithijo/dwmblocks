//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		                            /*Update Interval*/	/*Update Signal*/
	{"",        "$HOME/bin/status/misc",                    1,  	            7},
	{"",        "$HOME/bin/status/record",                  1,  	            5},
	{"",        "$HOME/bin/status/tor",                     1,  	            4},
	{"",        "$HOME/bin/status/vpn",                     1,  	            3},
	{"",        "$HOME/bin/status/key-mon",                 0,  	            2},
	{"",        "$HOME/bin/status/network-wlan-tfc",        1,		            0},
	{"",        "$HOME/bin/status/cpu-temp",                1,		            0},
	{"",        "$HOME/bin/status/memory",	                1,		            0},
	{"",        "$HOME/bin/status/filesystem",	            3600,	            0},
	{"",        "$HOME/bin/status/volume",	                0,	                1},
	{"",        "$HOME/bin/status/mailbox",				    1,	                6},
	{"",        "$HOME/bin/status/datetime",				1,		            0},
	{"",        "$HOME/bin/status/bat-state",				30,		            0},
	{"",        "$HOME/bin/status/bat-capacity",			30,		            0},
	{"",        "$HOME/bin/status/user",				    3600,	            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "\0";
static unsigned int delimLen = 5;
