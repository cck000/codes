valor = int(input())

a = int(valor/365)
valor = valor -(a*365)
m = int(valor / 30)
valor = int(valor - (m*30))
d = valor

print("{} ano(s)\n{} mes(es)\n{} dia(s)".format(a, m, d))