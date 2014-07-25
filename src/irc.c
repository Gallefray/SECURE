#include "secure.h"

char* nickname;
char* hostname;
char* chans[];
int chan_count = 0;

void irc_conn(char* server)
{
	// waiting for sockets.c to be done

	hostname = server;
}

void irc_disconn()
{
	// waiting for sockets.c to be done

	hostname = "";
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

void irc_msg(char* usr, char* msg)
{
	//encrypt
	char* pgp_msg = pgp_encrypt(pgp_getpub(usr), msg);

	//divide into lines
	char* lines[];
	int last_nlpos = -1;

	for(int i=0; strlen(pgp_msg); ++i)
	{}

	//send lines
	for(int i=0; sizeof(lines); ++i)
		sck_sendstr(hostname, "PRIVMSG "+usr+" :"+lines[i]);
}
