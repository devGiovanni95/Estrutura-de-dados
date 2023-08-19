#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "portuguese-brazilian");

	int a, b, menor;
	printf("Digite dois numero inteiros \n");
	scanf("%d%d",&a,&b);
	
	menor = a;
	
	if(a>b){
		menor = b;
	}
	
	printf("O menor número digitado foi %d", menor);
	return(0);
	
}
