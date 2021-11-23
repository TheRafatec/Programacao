// Fazer um programa para entrar via teclado com os valores das notas (P1 e P2) e calcular a média. 
//Exibir a situação final do aluno (“Aprovado ou Reprovado”), sabendo que a média de aprovação
// é igual a cinco.

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
float p1, p2, MEDIA;

printf("Digite a nota da avaliacao P1: ");
scanf("%f",&p1);

printf("Digite a nota da avaliacao P2: ");
scanf("%f",&p2);

MEDIA = (p1+p2*2)/3;

printf("A Nota Final e: %.2f",MEDIA);

if(MEDIA >= 5){
printf("\nAprovado!");
}
else{
printf("\nReprovado!");
}
return 0;
}
