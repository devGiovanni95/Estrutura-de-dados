#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese-brazilian");
	int epoca;
	printf("Digite o numero:");
	scanf("%d", &epoca);
	
	switch(epoca){
		case 9:printf("\n\n O numero � igual a 9.\n");
		break;
		
		case 10:printf("\n\n O numero � igual a 10.\n");
		break;
		
		case 11:printf("\n\n O numero � igual a 11.\n);
		break;
		
		default:printf("Per�odo inv�lido");				
	}
	return 0;
		
}
