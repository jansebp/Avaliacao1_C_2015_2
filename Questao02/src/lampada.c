#include "lampada.h"
#include <string.h>
#include <stdio.h>

void ligarLampada(void* lampadas, void* idxLampada){
	unsigned char* pLampadas = (unsigned char*) lampadas;
	unsigned int* pIdxLampada = (unsigned int*) idxLampada;
	
	pLampadas[*pIdxLampada] = 1;
	
	printf("%d\n",pLampadas[*pIdxLampada]);
}

void desligarLampada(void* lampadas, void* idxLampada){
	unsigned char* pLampadas = (unsigned char*) lampadas;
	unsigned int* pIdxLampada = (unsigned int*) idxLampada;
	
	pLampadas[*pIdxLampada] = 0;
	
	printf("%d\n",pLampadas[*pIdxLampada]);
}

void checaEstado(void* lampadas, void* idxLampada){
	unsigned char* pLampadas = (unsigned char*) lampadas;
	unsigned int* pIdxLampada = (unsigned int*) idxLampada;
	
	if(pLampadas[*pIdxLampada] == 0){
		printf("Estado da lampada %d: DESLIGADA!\n", *pIdxLampada);
	} else {
		printf("Estado da lampada %d: LIGADA!\n", *pIdxLampada);
	}
}