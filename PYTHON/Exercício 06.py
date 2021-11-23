# Entrar via teclado com o valor da cotação do dólar e uma certa quantidade de dólares. 
# Calcular e exibir o valor correspondente em Reais (R$).

v = float(input('Digite a cotação do dólar: '))
x = float(input('Digite a quantia de dólares: '))

reais = v * x

print(f"O valor em reais é: {reais:.2f}")