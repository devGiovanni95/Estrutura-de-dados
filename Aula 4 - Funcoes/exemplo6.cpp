#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define DIM 3
int main(){
	setlocale(LC_ALL,"portuguese-brazilian");
	
	int matriz[DIM][DIM];
	int linha, coluna;
	
	for(linha=0;linha<DIM;linha++){
		for(coluna=0;coluna<DIM;coluna++){
			printf("Elemento [%d][%d]: ",linha+1,coluna+1);
			scanf("%d",&matriz[linha][coluna]);
		}
	}
	
	for(linha=0;linha<DIM;linha++){
		for(coluna=0;coluna<DIM;coluna++){
			printf("%5d",matriz[linha][coluna]);
		}
			printf("\n");
	}
	
	system("pause");
}
