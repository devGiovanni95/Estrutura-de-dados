#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese-brazilian");
	int x = 25; // x vale 25
 	int* y = &x; // define que y vai receber o endereco de memoria de x
	*y = 30; //muda o conteudo de onde o ponteiro esta apontando
	
	printf("Valor atual de x: %i\n",x);
	printf("Valor atual de y: %i\n",*y);
	return(0);
}
