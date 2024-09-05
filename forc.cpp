#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int cont, num;
	int soma=0;
	
	printf("Digite um numero\n");
	scanf ("%d", &num);
	
	for(cont=1; cont<=num; cont++){
	
	printf("%d+", cont);
		soma+=cont;
	}
			
	printf("= %d", soma);
		
		
			
 
}
