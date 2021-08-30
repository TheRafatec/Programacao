// Calcular e exibir a área de um quadrado, a partir do valor de sua aresta(lado) que será digitado

// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[])
{

  // Declaração de variáveis
  int a, area;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Considerando que a área de um quadrado pode ser calculada multiplicando Lado X Lado, digite o comprimento de uma aresta de um quadrado:  ");
  scanf("%i", &a);

  // Faz o cálculo de área do quadrado;
  area = a * a;

  // Exibe o resultado final
  printf("A area de um quadrado de aresta %i e igual a: %i", a, area);

  return 0;
}