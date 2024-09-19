#include<stdio.h>
#include<stdlib.h>
int main(){
    int cont, somaP=0, somaI=0;
    
    printf("Pares\t\tImpares\n");
    
    for(cont=10; cont<=99; cont++){
        if(cont%2==0){
            printf("%d\t\t",cont);
            somaP=somaP+cont;
        
        }
        else
            {
                printf("%d\n",cont);
                somaI=somaI+cont;
            }
        printf("TOTAL\n%d\t\t%d", somaP, somaI);
    }
}
    


            
            
            
            
    
    
    
    
    
   
    