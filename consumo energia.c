#include<stdio.h>
#include<stdlib.h>

	main(){
		
		float kwconsum, preco, valor, precofinal;
	
	printf("escreva o preco do Kw\n");
	scanf("%f", &preco);
	printf("escreva a quantidade de Kw consumido\n");
	scanf("%f", &kwconsum);
	
		valor=preco*kwconsum;
		
	
	if(valor<110.2)
		valor=110.2;
		
	valor+=valor*0.1;
	
	printf("o valor do consumo de energia sera de: %2.f \n", valor);
		
	}
