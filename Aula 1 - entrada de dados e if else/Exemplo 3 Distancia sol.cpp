#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "portuguese-brazilian");
	printf("%s est� a %d milh�es de milhas do sol", "V�nus",67);
}
