# Entrar com dois valores quaisquer. Exibir o maior deles, se existir, caso contrário, 
# enviar mensagem avisando que os números são idênticos.

n1 = float(input('Digite o primeiro número: '))
n2 = float(input('Digite o segundo número: '))

if n1>n2:
    print(f"O maior número é: {n1:.2f}")
elif n1<n2:
    print(f"O maior número é: {n2:.2f}")
else:
    print(f"Os números são idênticos")