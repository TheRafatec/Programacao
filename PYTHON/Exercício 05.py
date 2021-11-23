# Entrar via teclado com o valor de uma temperatura em graus Celsius, 
# calcular e exibir sua temperatura equivalente em Fahrenheit.

g = float(input('Digite a temperatura em  graus Celsius: '))
f = (1.8 * g) + 32

print(f"A temperatura em graus Fahreinheit é: {f:.1f}")