#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese-brazilian");

	int i;
	do{
		system("cls");
		printf("\nEscolha a fruta pelo n�mero:\n\n");
		printf("\t[1] - Mam�o\n");
		printf("\t[2] - Abacaxi\n");
		printf("\t[3] - Laranja\n\n");
		scanf("%d", &i);
	}	while((i<1) || (i>3));
	
	switch(i){
		case 1:
			printf("\t\tVoc� escolheu Mam�o.\n");
			break;

		case 2:
			printf("\t\tVoc� escolheu Abacaxi.\n");
			break;
			
		case 3:
			printf("\t\tVoc� escolheu Laranja.\n");
			break;
						
	}
	return(0);
}
