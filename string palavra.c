#include<stdio.h>
#include<stdlib.h>
#include<string.h>


	main(){
		char palavra[10];  
		int l, tam;
		
		printf("escreva a palavra\n");
		gets(palavra);
		
		tam = strlen(palavra);
		
		for(l=1; l<=tam; l++)
			printf("%s\n", palavra);
	}
