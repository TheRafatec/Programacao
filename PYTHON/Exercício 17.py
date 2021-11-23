# Verificar se três valores quaisquer (A, B, C) que serão digitados formam ou não um triângulo retângulo. 
# Lembre-se que o quadrado da hipotenusa é igual a soma dos quadrados dos catetos.

v1 = float(input('Entre com o primeiro valor qualquer: '))
v2 = float(input('Entre com o segundo valor qualquer: '))
v3 = float(input('Entre com o terceiro valor qualquer: '))

v12 = v1 * v1
v22 = v2 * v2
v32 = v3 * v3

if v12 + v22==v32 or v12 + v32==v22 or v22 + v32==v12:
 print(f"essa conbinação resulta em um triângulo retângulo!")
else:
 print(f"essa conbinação NÃO resulta em um triângulo retângulo!")