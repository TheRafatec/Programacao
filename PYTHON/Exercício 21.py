# Fazer um programa para entrar via teclado com o valor da primeira nota (P1) 
# e o programa deverá calcular e exibir quanto o aluno precisa tirar na segunda nota (P2) 
# para ser aprovado, sabendo que a média de aprovação é igual a cinco.

p1 = float(input('Digite a nota da avaliação P1: '))
p2 = (5*3-p1)/2

print(f"A Nota P2 necessária para aprovação é:{p2:.2f}")