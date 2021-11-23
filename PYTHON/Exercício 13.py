# Calcular e exibir a área de um retângulo, a partir dos valores da base e altura que serão digitados. 
# Se a área for maior que 100, exibir a mensagem “Terreno grande”, 
# caso contrário, exibir a mensagem “Terreno pequeno”.
largura = int(input('Digite a largura do terreno: '))
comprimento = int(input('Digite o comprimento do terreno: '))

area = largura * comprimento
print(f"O valor da área é: {area}")

if area >= 100:
 print(f"Terreno grande!")
else:
 print(f"Terreno Pequeno!")