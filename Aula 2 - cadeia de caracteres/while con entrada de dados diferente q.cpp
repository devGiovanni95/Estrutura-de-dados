#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese-brazilian");
	
	char Ch;
	
	while(Ch!='q'){
	scanf("%c",&Ch);
	}
	return(0);
	
}
