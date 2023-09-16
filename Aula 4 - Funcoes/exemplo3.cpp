#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int prod(int x, int y){
	return(x*y);
}

int main(){
	setlocale(LC_ALL,"portuguese-brazilian");
	int saida;
	saida = prod(12,7);
	printf("A saida é: %d\n",saida);
	system("Pause");
	return(0);
}
