// A partir dos valores da base e altura de um triângulo, calcular e exibir sua área.

// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[])
{

  // Declaração de variáveis
  int a, b, area;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o comprimento da base do triangulo: ");
  scanf("%i", &a);

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite a altura do triangulo: ");
  scanf("%i", &b);

  // Faz o cálculo de área do triangulo;
  area = (a * b)/2 ;

  // Exibe o resultado final
  printf("A area de um triangulo de base %i e altura %i e igual a %i", a, b, area);

  return 0;
}