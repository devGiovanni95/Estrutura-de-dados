#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese-brazilian");
	
	int num;
	int quad;
	 
	printf("Digite um n�mero:");
	scanf("%d",&num);
	
	while(num != 0){
		quad = num * num;
			printf("O quadrado de %d = %d\n", num, quad);
			printf("Digite um n�mero:");
			scanf("%d",&num);
	}
	system("pause");
	return(0);
	
}
