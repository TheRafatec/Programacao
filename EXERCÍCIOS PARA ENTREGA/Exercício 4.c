// Calcular e exibir a média aritmética de quatro valores quaisquer que serão digitados.

// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[])
{

  // Declaração de variáveis
  int a, b, c, d, media;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o primeiro numero: ");
  scanf("%i", &a);

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite o segundo numero: ");
  scanf("%i", &b);

   // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "c"
  printf("Digite o segundo numero: ");
  scanf("%i", &c);

   // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "d"
  printf("Digite o segundo numero: ");
  scanf("%i", &d);

  // Faz o cálculo da media dos 4 numeros;
  media = (a + b + c + d)/4;

  // Exibe o resultado final
  printf("A media aritmética dos numeros: %i, %i, %i e  %i, e igual a: %i", a, b, c, d, media);

  return 0;
}
