#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "portuguese-brazilian");
	
	int num;
	printf("Digite um numero \n");
	scanf("%d",&num);
	
	if(num == 10){
		printf("\n\nVoc� acertou! \n");
		printf("O n�mero � igual a 10");
	}else{
		printf("\n\nVoc� errou! \n");
		printf("O n�mero � diferente de 10");
	}
	return(0);	
}
