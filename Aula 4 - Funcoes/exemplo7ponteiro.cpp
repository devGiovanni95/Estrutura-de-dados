#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese-brazilian");
	int num, valor;
	int *p;
	num = 55;
	p = &num;
	valor = *p;//utilizamos o *p para manipular o conteudo
	printf("%d\n",valor); 
	printf("Endereço de memória para onde o ponteiro aponta: %p\n",p);
	printf("O Valor da variavel apotada: %d\n", *p);
	//printf("O Valor do ponteiro apotado: %d\n", p);
	printf("O Valor da variavel num e: %d\n", num);
	printf(0);
}
