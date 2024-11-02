#include<stdio.h>
#include<stdlib.h>
#include<string.h>


	main(){
		char palavra[10];
 		int  l, tam, somatam, cont=0;
 			
 			do{
			
 			printf("escreva uma palavra: \n");
 			gets(palavra);
 			cont++;
 			
 		
 			tam = strlen(palavra);
 			printf("esta palavra possui: %d letras \n", tam);
 			somatam += tam;
 			
				
			}	while(strcmp(palavra, "FIM")!=0);
			
			printf("o total de letras lidas foi de: %d \n", somatam);
			printf("o total de palavras lidas foi de: %d \n", cont); 
				
			}
			 
