// Entrar via teclado com a base e a altura de um retângulo, calcular e exibir sua área

// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[])
{

  // Declaração de variáveis
  int a, b, area;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o comprimento da base do retângulo: ");
  scanf("%i", &a);

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite a altura do retângulo: ");
  scanf("%i", &b);

  // Faz o cálculo de área do retângulo;
  area = a * b;

  // Exibe o resultado final
  printf("A area de um retêngulo de base %i e altura %i e igual a %i", a, b, area);

  return 0;
}
