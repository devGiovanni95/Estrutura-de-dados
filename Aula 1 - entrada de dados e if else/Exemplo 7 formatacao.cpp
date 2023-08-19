#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "portuguese-brazilian");
	printf("Default: %f \n", 3.1415169265);
	printf("Uma casa %.1f \n", 3.1415169265);
	printf("Duas casas %.2f \n", 3.1415169265);
	printf("Tres casas: %.3f \n", 3.1415169265);
	printf("Notação Cientifica: %e \n", 3.1415169265);
	
}
