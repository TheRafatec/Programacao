//  Entrar via teclado com o valor da cotação do dólar e uma certa quantidade de dólares. Calcular e exibir o valor correspondente em Reais (R$).

// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[])
{

  // Declaração de variáveis
  float a, b, reais;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o valor da cotacao atual do dolar: ");
  scanf("%f", &a);


  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite a quantidade de dolares que possui: ");
  scanf("%f", &b);

  // Faz o cálculo da conversão de dolares para reais
  reais = b * a;

  // Exibe o resultado final
  printf("$ %.2f dolares equivalem a R$ %.2f reais.", b, reais );

  return 0;
}
