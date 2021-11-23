# Entrar com peso e altura de uma pessoa e calcular o IMC. A fórmula é IMC = peso / altura²

p = float(input('Digite o peso em Kg: '))
a = float(input('Digite a altura em m: '))

imc = p/(a*a)

print(f"O IMC é: {imc:.2f}")