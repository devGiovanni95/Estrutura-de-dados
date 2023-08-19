#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "portuguese-brazilian");
	
	char s[20];
	printf("Digite seu nome: ");
	scanf("%s",s); //sem o & antes do s no caso do texto
	printf("Seu nome é: %s",s);
	return(0);
}
	
