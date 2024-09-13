#include<stdio.h>
#include<stdlib.h>

main(){

int cont, nota, maior=0, menor=100, qtd_a;

printf("Entre a qtd de alunos: ");
scanf("%d", &qtd_a);

for (cont=1; cont<=qtd_a; cont++)
{
	printf("Entre com a nota do aluno %d: ",cont);
	scanf("%d", &nota);
	
	if(nota>maior)
		maior=nota;
	if(nota<menor)
		menor=nota;
}

printf("A menor nota e %d \n",menor);
printf("A maior nota e %d \n",maior);

}
