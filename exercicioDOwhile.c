#include<stdio.h>
#include<stdlib.h>
main(){
		int valor=0, soma, qnt_val=0;
		
		do
		{
		
			printf("\nentre um numero:");
			scanf("%d", &valor);
			soma+=valor;
			qnt_val++;
			printf("\nsubtotal: %d\n", soma);	
	}while(valor!=0);
	
	printf("\ntotal: %d\n", soma);
	printf("\no total de numeros digitados e de: %d\n",qnt_val);
	
}

