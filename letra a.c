#include<stdio.h>
#include<stdlib.h>
#include<string.h>


	main(){
		char palavra[10];
 		int  l, tam, cont=0;
 		
 		printf("entre uma palvra: ");
 		gets(palavra);
 		
 		tam = strlen(palavra);
 		
 		for(l=0; l,tam; l++)
 			if(palavra[l] == 'a')
 				cont++;
 			
 		if (cont!=0)
 			printf("o total de letras 'a' foi de: %d", cont);
 		else
 			printf("não há letras 'a' na palavra inserida");
 	}
 		
