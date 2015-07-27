#include <stdio.h>
#include "fibonacci.h"

/*
 *	Solucao nao recursiva, visto que nao eh aconselhavel recursividade
 *	para a Sequencia de Fibonacci
 */
void fibonacci(int termoFinal){
	long long fibo[termoFinal + 1], i;
	
	fibo[0] = 0;
	fibo[1] = 1;
	for (i = 2; i < termoFinal; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	for (i = 0; i < termoFinal; printf("%d ",fibo[i]), i++);
}

int fibonacciRec(int termoFinal){
	if(termoFinal <= 1){
		return termoFinal;
	}
	return (fibonacciRec(termoFinal-1) + fibonacciRec(termoFinal-2));
}