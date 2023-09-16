#include<stdio.h>
#include<malloc.h>
#include<locale.h>
#define ALTURA_MAXIMA 225

typedef struct {
	int peso; //peso em kg
	int altura; //altura em centimetro
} PesoAltura;

int main(){
	setlocale(LC_ALL,"portuguese-brazilian");
	//malloc -> faz alocação em memoria *Por padrao ele tenta alocar um tipo void por isso utilizamos o sizeof
	//criando um ponteiro que aponta para struct e aloca memoria para nossa estrutura
	PesoAltura* pessoa1 = (PesoAltura*) malloc(sizeof(PesoAltura));
	int t = malloc(sizeof())
	pessoa1->peso = 80;
	pessoa1->altura = 185;
	printf("Peso: %i, Altura: %i. ", pessoa1->peso, pessoa1->altura);
	if(pessoa1->altura>ALTURA_MAXIMA){
		printf("Altura acima da máxima.\n");
	}  else{
		printf("Altura abaixo da máxima.\n");
	}
}
