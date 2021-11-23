# Fazer um programa para entrar via teclado com os valores das notas (P1 e P2) e calcular a média. 
# Exibir a situação final do aluno (“Aprovado ou Reprovado”), 
# sabendo que a média de aprovação é igual a cinco.


p1 = float(input('Digite a nota da P1: '))
p2 = float(input('Digite a nota da P2: '))
MÉDIA = (p1 + p2*2)/3

print(f"A Nota Final é:{MÉDIA: .2f}")

if MÉDIA>=5:
  print(f"Aprovado!")
else:
  print(f"Reprovado!")