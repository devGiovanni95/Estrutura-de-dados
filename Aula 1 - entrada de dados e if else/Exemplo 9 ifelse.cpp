#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "portuguese-brazilian");

	int num;
	printf("Digite um numero \n");
	scanf("%d",&num);
	
	if(num > 10)
		printf("\n\nO número é maior que 10");
	
	if(num == 10){
		printf("\n\nVocê acertou! \n");
		printf("O número é igual a 10");
	}	
	
	if(num<10){
		printf("\n\nO número é menor que 10");
	}
	return(0);
	
}
