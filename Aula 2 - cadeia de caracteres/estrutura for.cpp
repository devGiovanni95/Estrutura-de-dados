#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese-brazilian");
	
	int count;
	
	for(count=1;count<=100;count++) printf("%d ",count);
	return(0);
}
