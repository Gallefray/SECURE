src=(./src/)

build:
	gcc -o bin/secure.bin $src/main.c $src/cmd.c $src/pgp.c $src/io.c
