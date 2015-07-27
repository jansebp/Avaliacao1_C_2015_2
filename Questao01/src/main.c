#include <stdio.h>
#include "tiraAcentos.h"

int main(int argc, char** argv){
	char input[64], output[64];

	/*
	//	Usado para identificar os decimais correspondentes às vogais acentuadas
	for (i = 0; i < strlen(input); 	printf("%d\n",(char)input[i]),
									i++);
	*/
	
	printf("Digite uma frase: ");
	gets(input);
	
	tiraAcentos(input, output);
	printf("A frase sem acentos: %s\n",output);
	
	return 0;
}