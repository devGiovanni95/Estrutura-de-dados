#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "portuguese-brazilian");
	
	int num;
	printf("Digite um numero \n");
	scanf("%d",&num);
	
	if(num == 10){
		printf("\n\nVocê acertou! \n");
		printf("O número é igual a 10");
	}else{
		printf("\n\nVocê errou! \n");
		printf("O número é diferente de 10");
	}
	return(0);	
}
