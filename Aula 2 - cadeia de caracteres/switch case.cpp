#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese-brazilian");
	int epoca;
	printf("Digite o trimestre do ano em que estamos:");
	scanf("%d", &epoca);
	
	switch(epoca){
		case 1:printf("Ver�o");
		break;
		
		case 2:printf("Outono");
		break;
		
		case 3:printf("Inverno");
		break;
		
		case 4:printf("Primavera");
		break;
		
		default:printf("Per�odo inv�lido");				
	}
	return 0;
		
}
