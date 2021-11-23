# Entrar via teclado, com dois valores distintos. Exibir o menor deles.

n1 = float(input('Digite o primeiro número: '))
n2 = float(input('Digite o segundo número: '))

if n1<n2:
    print(f"O menor número é: {n1:.2f}")
else:
    print(f"O menor número é: {n2:.2f}")
