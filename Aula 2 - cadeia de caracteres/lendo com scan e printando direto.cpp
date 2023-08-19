#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese-brazilian");
	char string[100];
	printf("Digite seu nome: ");
	gets(string);
	printf("\n\n Seu nome é: %s",string);
	return(0);
}
