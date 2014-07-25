#include "secure.h"

char* chans[];
int chan_count = 0;

void irc_conn(char* server)
{
	// waiting for sockets.c to be done
}

void irc_disconn()
{
	// waiting for sockets.c to be done
}

void irc_join(char* chan)
{
	//socket.c magic
	bool connected;
	if(connected)
		chans[chan_count++] = chan;
	else
	{
		//error message?
	}
}

void irc_leave(char* chan)
{
	//Nothing to look at, disperse
	if(chan_count == 0)
		return;

	//Needle in the haystack
	for(int i=0; i<sizeof(chans); ++i)
	{
		if(chan == chans[i])
		{
			//chans.pop(i) ? how do I do this in C?
			--chan_count;
		}
	}
}
