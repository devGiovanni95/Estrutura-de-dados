#include<stdio.h>
#include<locale.h>
int main(){
	/*Define a linguagem padrao para acentuação*/
	setlocale(LC_ALL, "portuguese-brazilian");
		
	/*Declaração de variavel*/
	int Idade;
	
	/*solicita a idade*/
	printf("Entre com sua idade:");
	
	/*Entrada de dados*/
	scanf("%i",&Idade);
	
	/*Imprime na tela */
	printf("Sua idade é: %i",Idade);
	return(0);
}
