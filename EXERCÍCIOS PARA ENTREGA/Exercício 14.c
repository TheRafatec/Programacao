//Entrar via teclado com três valores distintos. Exibir o maior deles.
#include <stdio.h>

int main(int argc, char *argv[])
{
 float n1, n2, n3, maior;

    printf("Digite os numeros para a comparacao:\n");
    scanf("%f \n%f \n%f", &n1, &n2, &n3);

    maior = n1;
    if(n2 > maior)
        maior = n2;
    if(n3 > maior)
        maior = n3;

    printf("\nO maior numero  informado e: %.2f", maior);

    return 0;
}