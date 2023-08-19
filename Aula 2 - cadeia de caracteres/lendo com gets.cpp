#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese-brazilian");
	char s[20];
	printf("Digite seu nome: ");
	gets(s);
	printf("Seu nome é: ");
	puts(s);
	return(0);
}
