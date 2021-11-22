//Calcular e exibir a área de um retângulo, a partir dos valores da base e altura que serão digitados. 
//Se a área for maior que 100, exibir a mensagem “Terreno grande”, caso contrário, exibir a mensagem “Terreno pequeno”.
#include <stdio.h>

// Função principal do programa
int main(int argc, char *argv[])
{
// Declaração de variáveis
float comprimento, largura, area;

printf("Digite o comprimento do terreno:  ");
scanf("%f", &comprimento);

printf("Agora digite a largura do terreno:  ");
scanf("%f", &largura);

area = comprimento*largura;

if (area >= 100)
{printf("Terreno grande hein");}
else
{printf("Terreno pequeno");}

return 0;
}
