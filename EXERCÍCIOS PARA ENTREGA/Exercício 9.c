// Entrar via teclado, com dois valores distintos. Exibir o maior deles.

#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[])
{
// Declaração de variáveis
float valor1, valor2;

printf("Digite o primeiro valor para a comparacao: ");
scanf("%f", &valor1);

printf("Digite o primeiro valor para a comparacao: ");
scanf("%f", &valor2);

if (valor1 > valor2)
    {printf("O valor %.2f e maior", valor1);}

else if(valor2 > valor1)
{printf("O valor %.2f e maior", valor2);}
else{printf("Os valores sao iguais");}

return 0;
}
