#ifndef SECURE_HEADER
#define SECURE_HEADER
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <readline/readline.h> // SOON :D
#include <gpgme.h>
#include <sys/types.h>
#include <sys/socket.h>

typedef enum {false, true} bool;

// main.c

// cmd.c
// Parses text input into commands
void cmd_getcmd(void); //is this really needed?
void cmd_parse(void); //seems to be doing well by itself
//BTW, I belive the CLI should have a separate .h, let's keep this one clean (as API?)

// pgp.c
// Handles encryption/decryption
void pgp_getmsg(void); // uses getline(void) to get the message line by line. Concats and stores it in a buffer (eventually a libgpgme buffer)
void pgp_getpub(void);
void pgp_verify(void);
char* pgp_decrypt(void);
char* pgp_encrypt(void);

// io.c (Can later be altered for readline and sockets)
// (please define)
void io_getlin(void);
void io_putlin(void);

// irc.c
// IRC functions
void irc_connect(char* server);
void irc_disconn(void);
void irc_join(char* chan);
void irc_leave(char* chan);
void irc_msg(char* usr, char* msg);
//not quite complete

// socket.c
void sck_connect(void);
void sck_disconn(void);
void sck_sendstr(void);
void sck_getstr(void);
// This one's yours, Finn!

#endif SECURE_HEADER
