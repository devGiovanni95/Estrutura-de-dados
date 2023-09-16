#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese-brazilian");
	
	char letra;
	
	for(letra='A';letra<='Z';letra++) 
	printf("%c ",letra);
	return(0);
}
