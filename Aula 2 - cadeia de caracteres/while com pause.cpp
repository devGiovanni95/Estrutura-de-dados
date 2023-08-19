#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese-brazilian");
	
	int i=0;
	while(i<100){
		printf("%d\n",i);
		i++;
	}
	system("pause");
	return(0);
	
}
