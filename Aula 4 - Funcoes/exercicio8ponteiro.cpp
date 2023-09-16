#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese-brazilian");
	int num, *p;
	num = 55;
	p = &num;

	printf("\nValor inicial: %d",num);
	*p=100; 
	printf("\nValor final %d\n", num);
	printf("Endereço de memória para onde o ponteiro aponta: %p\n", p);
	return(0);
}
