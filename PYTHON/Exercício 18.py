# Entrar com o peso, o sexo e a altura de uma determinada pessoa.
# Após a digitação, exibir se esta pessoa está ou não com seu peso ideal. Fórmula: peso/altura².

peso = float(input('Digite o seu peso: '))
altura = float(input('Digite a sua altura: '))
sexo = str(input('Digite o sexo M ou F: '))
imc = peso/(altura*altura)

print(f"O IMC é: {imc:.2f}")

#Para o sexo feminino
if ((sexo == 'f') or (sexo =='F')):
    if imc<19:
        print(f"Abaixo do peso!")
    elif imc>=19 and imc<24:
        print(f"Peso ideal")
    else:
        print(f"Acima do peso!")

#Para o sexo masculino
if ((sexo == 'm') or (sexo =='M')):
    if imc<20:
        print(f"Abaixo do peso")
    elif imc>=20 and imc<25:
        print(f"Peso ideal")
    else:
        print(f"Acima do peso!")