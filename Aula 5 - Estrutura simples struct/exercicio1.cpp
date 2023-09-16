#include<stdio.h>
#include<malloc.h>
#include<locale.h>
#include <string.h> 

typedef struct {
	char matricula[15]; 
	char nome[30];
	float nota;
} Aluno;

int main(){
	setlocale(LC_ALL,"portuguese-brazilian");
	
	Aluno aluno;
    strcpy(aluno.matricula, "1050482213037");
    strcpy(aluno.nome, "Giovanni almeida");
	aluno.nota = 7.5;
	printf("Matricula: %s \nNome: %s \nNota: %f. ", aluno.matricula, aluno.nome, aluno.nota);
	
	return 0;
}
