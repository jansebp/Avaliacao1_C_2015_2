#include <string.h>

void tiraAcentos(char* input, char* output){
	char*	pInput	= (char*) input;
	char*	pOutput	= (char*) output;
	
	int i;
	
	/*
	 * Solução abaixo muito custosa. Por algum motivo, não estava sendo possível
	 * identificar corretamente os caracteres para fazer a comparação.
	 * Essa foi a única solução que eu consegui que funcionasse, para resolver o problema.
	 */
	for(i = 0; i < strlen(pInput); i++){
		switch(pInput[i]){
			//Tratando o caso da letra 'a' acentuada
			case (char)-96:
			case (char)-123:
			case (char)-58:
			case (char)-125:
			case (char)-124:
				input[i] = 'a';
				break;
			//Tratando o caso da letra 'A' acentuada
			case (char)-75:
			case (char)-73:
			case (char)-57:
			case (char)-74:
			case (char)-114:
				input[i] = 'A';
				break;
			
			//Tratando o caso da letra 'e' acentuada
			case (char)-126:
			case (char)-118:
			case (char)-120:
			case (char)-119:
				input[i] = 'e';
				break;
			//Tratando o caso da letra 'E' acentuada
			case (char)-112:
			case (char)-44:
			case (char)-46:
			case (char)-45:
				input[i] = 'E';
				break;
				
			//Tratando o caso da letra 'i' acentuada	
			case (char)-95:
			case (char)-115:
			case (char)-116:
			case (char)-117:
				input[i] = 'i';
					break;
			//Tratando o caso da letra 'I' acentuada
			case (char)-42:
			case (char)-34:
			case (char)-41:
			case (char)-40:
				input[i] = 'I';
				break;
			
			//Tratando o caso da letra 'o' acentuada
			case (char)-94:
			case (char)-107:
			case (char)-28:
			case (char)-109:
			case (char)-108:
				input[i] = 'o';
					break;
			//Tratando o caso da letra 'O' acentuada
			case (char)-32:
			case (char)-29:
			case (char)-27:
			case (char)-30:
			case (char)-103:
				input[i] = 'O';
				break;
					
			//Tratando o caso da letra 'u' acentuada
			case (char)-93:
			case (char)-105:
			case (char)-106:
			case (char)-127:
				input[i] = 'u';
				break;
			//Tratando o caso da letra 'U' acentuada
			case (char)-23:
			case (char)-21:
			case (char)-22:
			case (char)-102:
				input[i] = 'U';
				break;
			
			//Tratando o caso da letra 'ç'
			case (char)-121:
				input[i] = 'c';
				break;
			//Tratando o caso da letra 'Ç'
			case (char)-128:
				input[i] = 'C';
				break;
		}
	}
	
	strcpy(pOutput, pInput);
}