#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int square(int x){
	printf("O quadrado de %d = %d\n",x,(x*x));
	return(0);
}

int main(){
	setlocale(LC_ALL,"portuguese-brazilian");
	int num;
	printf("Entre com um numero: ");
	scanf("%d",&num);
	printf("\n");
	square(num);
	printf("\n");
	system("Pause");
	return(0);
}
