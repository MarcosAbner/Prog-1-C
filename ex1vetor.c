#include<stdio.h>
#include<stdlib.h>

main(){
	int seq[10], cont, val;
	
	printf("digite um valor:\n");
	scanf("%d", &val);
	
	for(cont=0; cont<10; cont++){
		
		seq[cont] = cont+val;
		printf("%d\n", seq[cont]);
		
	}

}
