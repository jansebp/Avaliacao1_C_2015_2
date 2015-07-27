#include <stdio.h>
#include <stdlib.h>
#include "alunos.h"
#define MAX 100

//TODO Separar em arquivos
//TODO Implementar uma lista estática de alunos
//TODO Implementar a função que inicia a lista
//TODO Implementar a função que adiciona elementos ao final
//TODO Implementar a função que ordena os elementos de uma lista
struct aluno{
	char matricula[9];
	char nome[50];
	float n1;
	float n2;
	float n3;
	float media;
} aluno;

t_aluno lista[MAX];

void iniciaLista(int n, t_aluno** lista){
	int i;
	for(i = 0; i < n; lista[i] = NULL, i++);
}

int main(){
	int qtdAlunos = 0, i = 0;
	
	printf("Quantos alunos existem na turma? ");
	scanf("%d",&qtdAlunos);
	
	t_aluno lista[qtdAlunos];
	
	for(i = 0; i < qtdAlunos; i++){
		//insereAluno(t_aluno** listaAlunos, i);
	}
	
	return 0;
}