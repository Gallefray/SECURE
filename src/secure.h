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
void cmd_getcmd(void);
void cmd_parse(void);

// pgp.c
void pgp_getmsg(void); // uses getline(void) to get the message line by line. Concats and stores it in a buffer (eventually a libgpgme buffer)
void pgp_getpub(void);
void pgp_verify(void);
void pgp_decrypt(void);

// io.c (Can later be altered for readline and sockets)
void io_getlin(void);
void io_putlin(void);
#endif SECURE_HEADER
