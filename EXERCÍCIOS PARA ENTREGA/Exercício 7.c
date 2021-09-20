//  Entrar via teclado com o valor de cinco produtos. Após as entradas, digitar um valor 
// referente ao pagamento da somatória destes valores. Calcular e exibir o troco que deverá ser devolvido.

// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[])
{

  // Declaração de variáveis
  float v1, v2, v3, v4, v5, vtotal, vpago, troco;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "v1"
  printf("Digite o valor do produto 1:R$ ");
  scanf("%f", &v1);

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "v2"
  printf("Digite o valor do produto 2:R$ ");
  scanf("%f", &v2);

 // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "v3"
  printf("Digite o valor do produto 3:R$ ");
  scanf("%f", &v3);

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "v4"
  printf("Digite o valor do produto 4:R$ ");
  scanf("%f", &v4);

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "v5"
  printf("Digite o valor do produto 5:R$ ");
  scanf("%f", &v5);

  // Faz o cálculo da soma dos valores detodos os produtos
  vtotal = v1 + v2+ v3 + v4 + v5;

  // Exibe o resultado da soma dos valores
  printf("A soma dos valores dos produtos comprados e:R$ %.2f", vtotal );

 // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "vpago"
  printf("\nDigite o valor pago pelo cliente:R$ ");
  scanf("%f", &vpago);

  // Faz o calculo da diferença entre o valor recebido e o total da compra para verificar se há troco
  troco = vpago - vtotal;
    
 // Exibe o resultado do calculo da diferença dos valores
  printf("Troco:R$ %.2f", troco );


  return 0;
}