# A partir de três valores que serão digitados, verificar se formam ou não um triângulo. 
# Em caso positivo, exibir sua classificação: “Isósceles, escaleno ou eqüilátero”. 
# Um triângulo escaleno possui todos os lados diferentes, o isósceles, dois lados iguais e o 
# eqüilátero, todos os lados iguais. Para existir triângulo é necessário que a soma de 
# dois lados quaisquer seja maior que o outro, isto, para os três lados.

lado1 = int(input('Digite o valor do lado 1: '))
lado2 = int(input('Digite o valor do lado 2: '))
lado3 = int(input('Digite o valor do lado 3: '))

a = (lado1+lado2)
b = (lado1+lado3)
c = (lado2+lado3)
 
if a>lado3 and b>lado2 and c>lado1:
 print(f"Isso é um triângulo")
else:
 print(f"isso não é um triângulo")

if lado1==lado2 and lado2==lado3:
 print(f"Triângulo Equilátero")

elif lado1==lado2 or lado2==lado3 or lado1==lado3:
 print(f"Triângulo Isósceles")

elif lado1!=lado2 and lado1!=lado3 and lado2!=lado3:
 print(f"Triângulo Escaleno")


