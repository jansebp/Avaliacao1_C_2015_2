#include <string.h>
#include "decript.h"

void decript(char* hash, char* pass){
	
	const char key [] = {"MaStErSuPeRhYpErKeY"};
	
	char*	pHash	= (char*) hash;
	char*	pPass	= (char*) pass;
	int		hashLen = strlen(hash);
	int		keyLen	= strlen(key);
	
	int idx, ckey;

	for (idx = 0; idx < hashLen;
		ckey = idx % keyLen,	// garantir o indice circular para a chave de encriptacao
		pPass[idx] = (pHash[idx] - 33) ^ key[ckey],	// engenharia reversa no codigo de criptografia
		idx++);
		
}