#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "portuguese-brazilian");
	
	/*Declarando variaveis*/
	int Dias;
	float Anos;
	
	/*solicitando o valor */
	printf("Entre com o n�meros de dias:");
	
	/*Scaneia o valor digitado no teclado*/
	scanf("%d",&Dias);
	
	/*Efetua a convers�o*/
	Anos = Dias/365.25;
	
	/*Mostra o valor j� convertido para o usuario*/
	printf("\n\n%d dias equivalem a %.2f anos.\n",Dias,Anos);
	
	/*N�o retorna nada*/
	return(0);
}
