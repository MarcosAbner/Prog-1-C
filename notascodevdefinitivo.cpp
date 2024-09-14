#include<stdio.h>
#include<stdlib.h>

main(){

int cont, qtd_a;
float nota, nota2, maior, menor;

printf("Entre a qtd de alunos: ");
scanf("%d", &qtd_a);

for (cont=1; cont<=qtd_a; cont++)
{
	printf("Entre com a nota do aluno %d: ",cont);
	scanf("%f", &nota);
	
	nota2 = (float)nota/2;
	
	if(cont==1){
		maior=nota2;
		menor=nota2;
	}
	else{
	
	if(nota2>maior)
		maior=nota2;
		
	if(nota2<menor)
		menor=nota2;
		
	}
}

printf("A menor nota e %.2f \n",menor);
printf("A maior nota e %.2f \n",maior);

}
