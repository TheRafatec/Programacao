//Entrar com peso e altura de uma pessoa e calcular o IMC. A fórmula é IMC = peso / altura²

#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[])
{
// Declaração de variáveis
float peso, altura, IMC;

printf("Digite o seu peso em kg: ");
scanf("%f", & peso);

printf("Digite a sua altura em m: ");
scanf("%f", & altura);

IMC = peso / (altura * altura);

printf("O seu indice de massa corporal e: %.2f", IMC);

return 0;

}   