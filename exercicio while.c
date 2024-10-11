#include<stdio.h>
#include<stdlib.h>
main(){
		int valor=0, soma, qnt_val=0;
	
	
		
		printf("\nentre um numero:");
		scanf("%d", &valor);
		soma+=valor;
		qnt_val=1;
			
	while(soma<=40){
		printf("\nentre um numero:");
		scanf("%d", &valor);
		soma+=valor;
		printf("\no subtotal e de: %d\n", soma);
		qnt_val++;
		
	}
	
	printf("\ntotal: %d\n", soma);
	printf("\no total de numeros digitados e de: %d\n",qnt_val);
	
}

