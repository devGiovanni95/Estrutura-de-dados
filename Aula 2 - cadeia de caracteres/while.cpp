#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese-brazilian");
	
	int i;
	i=0;
	
	while(i<=10){
		printf("N�mero %d\n",i);
		i++;
	}
	return 0;		
}
