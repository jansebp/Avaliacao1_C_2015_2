#include "calcula.h"

int somaMultiplos3e7 (int inicio, int fim){
	int i, soma = 0;
	
	for(i = inicio; i <= fim; i++){
		if(testaMult3e7(i) == 1){
			soma += i;
		}
	}
	
	return soma;
}

int testaMult3e7(int num){
	if (((num % 3) == 0) || ((num % 7) == 0))
		return 1;
	return 0;
}