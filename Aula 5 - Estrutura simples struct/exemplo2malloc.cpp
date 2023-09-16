#include<stdio.h>
#include<malloc.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese-brazilian");

	//o  
 	double* y = (double*) malloc(sizeof(double));
	*y = 20; //muda o conteudo de onde o ponteiro esta apontando2
	double z = sizeof(double);
	
	//mostra o valor de y e o tamanho de memoria alocada em z
	printf("Valor atual de y: %f\n z: %f",*y,z);
	return(0);
}
