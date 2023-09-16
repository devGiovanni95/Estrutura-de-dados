#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese-brazilian");
	
	int valores[10];
	int indice;
	
	printf("Escreva 10 numeros inteiro: \n");
	
	for(indice=0;indice<10;indice++){
		printf("\n[%d]° numero = ",indice+1);
		scanf("%d",&valores[indice]);
	}
	printf("Valores em ordem reversa: \n");
	
	for(indice=9;indice>=0;indice--){
		printf("%d\n",valores[indice]);
	}
	return(0);
}
