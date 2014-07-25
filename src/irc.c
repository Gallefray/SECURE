#include "secure.h"

void irc_join(String channel[])
{
	for(int i=0; i<sizeof(channel); ++i) //this is SURELY(?) wrong, just a concept until I figure out strings
		irc_join(channel[i]);
}

void irc_join(String channel[], String pwd[])
{
	for(int i=0; i<sizeof(channel); ++i)
		irc_join(channel[i], pwd[i]);
}
