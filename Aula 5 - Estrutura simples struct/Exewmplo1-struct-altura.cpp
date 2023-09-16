#include <stdio.h>
#define ALTURA_MAXIMA 225
#include<locale.h>
typedef struct {
	int peso; //peso em kg
	int altura; //altura em centimetro
} PesoAltura;

//definindo que o int pode ser chamado pelo apelido
typedef int CHAVE;

int main(){
	setlocale(LC_ALL,"portuguese-brazilian");
	PesoAltura pessoa1;
	pessoa1.peso = 80;
	pessoa1.altura = 185;
	printf("Peso: %i, Altura: %i. ", pessoa1.peso, pessoa1.altura);
	if(pessoa1.altura>ALTURA_MAXIMA){
		printf("Altura acima da máxima.\n");
	}  else{
		printf("Altura abaixo da máxima.\n");
	}
}
