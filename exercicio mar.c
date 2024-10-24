#include<stdlib.h>
#include<stdio.h>

main(){
	float vetprec[5]= {100.50, 75.30, 120.00, 90.25, 140.70};
	int num, cont;
	float preco;
	
	
	printf("Lista de frutos do Mar:\n");
		for(cont=0; cont<5; cont++){
		printf("%d. R$ %.2f\n", cont + 1 ,vetprec[cont]);
	}
	
	printf("\n\ndigite o numero respectivo ao preco que deseja alterar:");
	scanf("%d", &num);
	
	if(num<1 , num>5){
		printf("\nEste numero e invalido!");	
	}
	
	printf("\no numero que deseja altera e: R$ %.2f\n\n", vetprec[num-1]);
	printf("digite o novo valor que gostaria de atribuir ao numero:");
	scanf("%f", &preco);
	
	vetprec[num-1] = preco;
	
	printf("\nLista atualizada de frutos do Mar:\n\n");
	for(cont=0; cont<5; cont++){
		printf("%d. R$ %.2f\n", cont + 1 ,vetprec[cont]);
	}
	printf("\nobrigado pela preferencia, tenha um bom dia!");
	
}
