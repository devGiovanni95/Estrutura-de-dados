#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "portuguese-brazilian");
	int idade;
	
	printf("Digite sua Idade: ");
	scanf("%d",&idade);

	if(idade>=21) {
		if(idade>70) {
			printf("Você é um Idoso!!!");
		} else {
			printf("Sinto muito você é Adulto");
		}
	} else {
		printf("Sorria voce é Jovem!!!");
	}
	
}	
