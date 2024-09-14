#include<stdio.h>
#include<stdlib.h>

main(){

int cont, qtd_a;
float nota, nota2, maior=0, menor=100;

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
		nota=nota/2;
	if(nota<menor)
		menor=nota2;
		nota=nota/2;
	}
}

printf("A menor nota e %.2f \n",nota2);
printf("A maior nota e %.2f \n",nota2);

}
