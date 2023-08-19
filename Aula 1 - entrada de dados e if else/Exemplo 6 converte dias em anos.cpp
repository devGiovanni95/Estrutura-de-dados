#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "portuguese-brazilian");
	
	/*Declarando variaveis*/
	int Dias;
	float Anos;
	
	/*solicitando o valor */
	printf("Entre com o números de dias:");
	
	/*Scaneia o valor digitado no teclado*/
	scanf("%d",&Dias);
	
	/*Efetua a conversão*/
	Anos = Dias/365.25;
	
	/*Mostra o valor já convertido para o usuario*/
	printf("\n\n%d dias equivalem a %.2f anos.\n",Dias,Anos);
	
	/*Não retorna nada*/
	return(0);
}
