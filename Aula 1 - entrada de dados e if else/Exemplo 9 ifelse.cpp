#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "portuguese-brazilian");

	int num;
	printf("Digite um numero \n");
	scanf("%d",&num);
	
	if(num > 10)
		printf("\n\nO n�mero � maior que 10");
	
	if(num == 10){
		printf("\n\nVoc� acertou! \n");
		printf("O n�mero � igual a 10");
	}	
	
	if(num<10){
		printf("\n\nO n�mero � menor que 10");
	}
	return(0);
	
}
