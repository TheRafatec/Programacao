//  Entrar via teclado com o valor de uma temperatura em graus Celsius, calcular e exibir sua temperatura equivalente em Fahrenheit.

// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[])
{

  // Declaração de variáveis
  float celsius, fahrenheit;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o valor da temperatura em graus Celsius: ");
  scanf("%f", &celsius);

  // Faz o cálculo da conversão de graus celsius para fahrenheit;
  fahrenheit = celsius * 33.8;

  // Exibe o resultado final
  printf("%.2f graus Celsius equivalem à %.2f graus Fahrenheit.", celsius, fahrenheit );

  return 0;
}
