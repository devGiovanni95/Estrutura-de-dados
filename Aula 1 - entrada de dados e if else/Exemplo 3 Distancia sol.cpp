#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "portuguese-brazilian");
	printf("%s está a %d milhões de milhas do sol", "Vênus",67);
}
