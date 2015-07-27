#include <stdio.h>
#include "decript.h"

int main(int argc, char** argv){

	char pass[32] = {0};
	char hash[] = {"32B>I8[(R[B.X9E"};
	
	decript(hash, pass);
	
	printf("Password Decriptado: %s\n", pass);

	return 0;
}