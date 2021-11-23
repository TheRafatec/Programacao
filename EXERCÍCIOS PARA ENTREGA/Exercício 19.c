// A partir dos valores da aceleração (a em m/s2), da velocidade inicial (v0 em m/s) e do tempo de 
//percurso(t em s). Calcular e exibir a velocidade final do automóvel em km/h.
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
// Declaração das variáveis
float a, V, t, V0;

printf("Digite a aceleracao em m/s2: ");
scanf("%f",&a);

printf("Digite a Velocidade Inicial em m/s: ");
scanf("%f",&V0);

printf("Digite o Tempo de Percurso em s: ");
scanf("%f",&t);

V = V0 + a*t;

printf("A Velocidade final e: %2.f km/h",V );

if(V<=40){
printf("\nVeiculo muito lento!");
}
else if(V>40 && V<=60){
printf("\nVelocidade permitida!");
}
else if(V>60 && V<=80){
printf("\nVelocidade de cruzeiro!");
}
else if(V>80 && V<=120){
printf("\nVeiculo rapido");
}
else if(V>120){
printf("\nVeiculo muito rapido");
}           

return 0;
}
