#include "secure.h"

void irc_join(str chan[])
{
	for(int i=0; i<sizeof(chan); ++i) //this is SURELY(?) wrong, just a concept until I figure out strings
		irc_join(chan[i]);
}

void irc_join(str chan[], str pwd[])
{
	for(int i=0; i<sizeof(chan); ++i)
		irc_join(chan[i], pwd[i]);
}
