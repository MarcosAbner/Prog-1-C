#include<stdio.h>
#include<stdlib.h>
#include<time.h>

	main(){
	
		int num=0, inf=0, sup=100, l, maior=0, maiorp=0, numero[100] = {0};
		
		srand(time(0));
		
		for (l=0; l<100; l++){
			numero[l] = (rand()%(sup - inf + 1)) + inf;
			printf("%d - %d\n ", l , numero[l]);
			
			if( numero[l] > maior){
				maior=numero[l];
				maiorp=l;
			}
		}
		
		printf("maior: %d\n ", maior);
		printf("poesicao: %d ",maiorp);
				
	}
