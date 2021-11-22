// Entrar com o peso e a altura de uma determinada pessoa. 
// Após a digitação, exibir se esta pessoa está ou não com seu peso ideal. Fórmula: peso/altura².

#include <stdio.h>
int main(int argc, char *argv[]){
float peso, altura, imc;
printf("Digite o seu peso: ");
scanf("%f", &peso);
printf("Digite a sua altura: ");
scanf("%f", &altura);
imc = peso / (altura*altura);
if (imc < 20){
printf("Abaixo do peso!");
}
else if(imc < 25){
printf("Peso ideal");
}
else{
printf("Acima do peso!");}

return 0;
}