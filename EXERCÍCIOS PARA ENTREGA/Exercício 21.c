//Fazer um programa para entrar via teclado com o valor da primeira nota (P1) 
//e o programa deverá calcular e exibir quanto o aluno precisa tirar na segunda nota (P2) 
//para ser aprovado, sabendo que a média de aprovação é igual a cinco.

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
// Declaração das variáveis
float p1, p2;

printf("Digite a nota da avaliacao P1: ");
scanf("%f",&p1);

p2 = (5*3-p1)/2;

printf("A nota de P2 para Aprovacao e: %.2f",p2);
return 0;
}
