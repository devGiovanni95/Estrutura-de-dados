#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int mensagem(){
	printf("Olá!\n");
	return(0);
}
int main(){
	setlocale(LC_ALL, "portuguese-brazilian");
	mensagem();
	printf("Eu estou vivo!\n");
	system("Pause");
	return(0);
}
