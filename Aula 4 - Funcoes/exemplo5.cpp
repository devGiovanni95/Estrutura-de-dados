#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese-brazilian");

	int pesos[3][5] = {{10,30,45,70,36},{86,44,63,82,80},{70,61,52,63,74}};
	
	int linha, coluna;
	for(linha=0;linha<3;linha++){
		for(coluna=0;coluna<5;coluna++){
			printf("Elemento[%d][%d] = %d\n", linha, coluna, pesos[linha][coluna]);
		}
	}			
	
	system("pause");
	return(0);

}
