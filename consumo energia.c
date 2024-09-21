#include<stdio.h>
#include<stdlib.h>
//Deseja-se calcular a conta de consumo de energia elétrica de um consumidor. Para isto, escreva
//um programa que leia o preço da energia (em Kw) e a quantidade de Kw consumido.
//Devido às regras para consumo de energia elétrica, o menor valor que se pode pagar é de
//R$110,20; mesmo se o consumo for menor. 
	main(){ 
		float preco, consum, totconsum;
	
	printf("Escreva o preco do Kw\n");
	scanf("%f", &preco);
	printf("Escreva a quantidade de Kw consumido:\n");
	scanf("%f", &consum);
	
	totconsum=consum*preco;

	if(totconsum<110.2)
		totconsum=110.2;
		
		
	totconsum+=totconsum*0.1;
	printf("O valor final do seu consumo foi: R$ %.2f\n", totconsum);
	
