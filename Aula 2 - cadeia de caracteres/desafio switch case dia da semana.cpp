#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese-brazilian");
	int diasemana;
	printf("Digite um n�mero correspondente a um dia da semana:");
	scanf("%d", &diasemana);
	
	switch(diasemana){
		case 1:printf("Domingo");
		break;
		
		case 2:printf("Segunda-feira");
		break;
		
		case 3:printf("Ter�a-feira");
		break;
		
		case 4:printf("Quarta-feira");
		break;
				
		case 5:printf("Quinta-feira");
		break;
		
		case 6:printf("Sexta-feira");
		break;
		
		case 7:printf("S�bado");
		break;
		
		
		default:printf("Dia inexistente na semana");				
	}
	return 0;
		
}
