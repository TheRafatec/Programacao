# Entrar com o peso e a altura de uma determinada pessoa. Após a digitação, 
# exibir se esta pessoa está ou não com seu peso ideal. Fórmula: peso/altura².

peso = float(input('Digite o peso em Kg: '))
altura = float(input('Digite a altura em m: '))

imc = peso/(altura*altura)

print(f"O IMC é: {imc:.2f}")

if imc<20:
 print(f"Abaixo do peso!")
elif imc>=20 and imc<25:
 print(f"Peso ideal")
else:
 print(f"Acima do peso")