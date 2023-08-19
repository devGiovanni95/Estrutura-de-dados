#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "portuguese-brazilian");
	printf("Se quisesse imprimir uma string : %s","Minha string!");
}
