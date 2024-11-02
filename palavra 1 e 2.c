#include<stdio.h>
#include<stdlib.h>
#include<string.h>


	main(){
		char palavra1[30], palavra2[30];
 		int  l, tam, cont=0;
 		
 		printf("entre a palavra 1: ");
 		gets(palavra1);
 		printf("entre a palavra 2: ");
 		gets(palavra2);
 		
 		
 		if( strlen(palavra1) + strlen(palavra2) <= 30)
 			strcat(palavra1, palavra2);
 		else
 			strcpy(palavra1, palavra2);
 		
 		printf("o resultado foi: %s", palavra1);
 	}
