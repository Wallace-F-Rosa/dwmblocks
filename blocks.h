//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	1,		0},

    /* {"  ", "upower -i /org/freedesktop/UPower/devices/battery_BAT1| grep -E \"percentage\"| awk '{printf(\"\%d\%%\\n\", $2)}' ",					60,		0}, */
    {"  ", "sb-battery",					60,		1},
    {"\uf017 ", "date +'%a %d %b %Y %H:%M' ",					60,		2}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
