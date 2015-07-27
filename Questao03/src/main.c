#include <stdio.h>
#include "calcula.h"

int main(){
	int inicio = 0, fim = 1000, soma = 0;
	soma = somaMultiplos3e7(inicio, fim);
	
	printf("Soma dos multiplos de 3 e 7, de %d ate %d: %d \n", inicio, fim, soma);
	
	return 0;
}