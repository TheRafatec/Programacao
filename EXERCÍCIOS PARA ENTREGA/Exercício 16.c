// A partir de três valores que serão digitados, verificar se formam ou não um triângulo. 
//Em caso positivo, exibir sua classificação: “Isósceles, escaleno ou eqüilátero”. 
//Um triângulo escaleno possui todos os lados diferentes, o isósceles, dois lados iguais e o eqüilátero, todos os lados iguais. 
//Para existir triângulo é necessário que a soma de dois lados quaisquer seja maior que o outro, isto, para os três lados.

#include <stdio.h>

int main(int argc, char *argv[]){
float lado01, lado02, lado03;

printf("\n Digite o tamanho do lado 01: ");
scanf("%f", &lado01);

printf("Digite o tamanho do lado 02: ");
scanf("%f", &lado02);

printf("Digite o tamanho do lado 03: ");
scanf("%f", &lado03);

if ( ((lado01 + lado02) > lado03) &&
((lado01 + lado03) > lado02) &&
((lado02 + lado03) > lado01) ){
if ( (lado01 == lado02) && (lado01 == lado03) ){
printf("Triangulo Equilatero!");
}
else if( (lado01 != lado02) && (lado01 != lado03) ){
printf("Triangulo Escaleno!");
}
else{
printf("Triangulo Isosceles!");
}
}
else{
printf("Nao e Triangulo!");
}
return 0;
}