#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "portuguese-brazilian");
	printf("Valor inteiro atribu�do foi %d para o caracter %c e um float foi de %.2f",99,'a',1.45);
}
