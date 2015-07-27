#include <stdio.h>
#include "fibonacci.h"

int main(){
	int ultimoTermo = 100;
	
	printf("Sequencia de Fibonacci ate o termo %d:\n", ultimoTermo);
	fibonacci(ultimoTermo);

	return 0;
}