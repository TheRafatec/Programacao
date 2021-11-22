// Verificar se três valores quaisquer (A, B, C) que serão digitados formam ou não um triângulo retângulo. 
// Lembre-se que o quadrado da hipotenusa é igual a soma dos quadrados dos catetos.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 float v1, v2, v3, v12, v22, v32;

printf("Entre com o primeiro valor qualquer: ");
scanf("%f", &v1);

printf("Entre com o segundo valor qualquer: ");
scanf("%f", &v2);

printf("Entre com o terceiro valor qualquer: ");
scanf("%f", &v3);

v12 = v1 * v1;
v22 = v2 * v2;
v32 = v3 * v3;

if (((v12 + v22)==v32) || ((v12 + v32)==v22) || ((v22 + v32)==v12))
{
printf("essa conbinacao resulta em um triangulo retangulo!");
}
else
{
printf("essa combinacao nao resulta em um triangulo retangulo");
}
return 0;
}

