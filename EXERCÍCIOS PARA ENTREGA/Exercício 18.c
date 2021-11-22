// Entrar com o peso, o sexo e a altura de uma determinada pessoa. Após a digitação, exibir se esta pessoa
// está ou não com seu peso ideal. Fórmula: peso/altura².
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
float peso, altura, imc;
int   sexo;

printf("Digite o seu peso: ");
scanf("%f", &peso);

printf("Digite a sua altura: ");
scanf("%f", &altura);

printf("Informe o seu sexo. Digite 1 para MASCULINO ou 2 para FEMININO: ");
scanf("%d", &sexo);

imc = peso / (altura*altura);
printf("O seu imc e %.2f, portanto sua condicao eh: ", imc);

if (sexo == 1)
{
    if (imc < 20)   
    {
        printf("abaixo do peso!");
    }
    else if (imc < 25)
    {
        printf("peso ideal!");
    }
    else
    {
        printf("acima do peso!");
    }

}

if (sexo == 2)
{
    if (imc < 19)   
    {
        printf("abaixo do peso!");
    }
    else if (imc < 24)
    {
        printf("peso ideal!");
    }
    else
    {
        printf("acima do peso!");
    }

}
return 0;
}