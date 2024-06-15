#BEE 1021

valor = float(input())



nota100 = valor//100
aux = valor %100
nota50 = aux // 50
aux %= 50
nota20 = aux//20
aux %=20
nota10 = aux//10
aux %=10
nota5 = aux//5
aux %=5
nota2 = aux//2
aux %= 2

moeda1 = aux//1
aux %= 1
moeda50 = aux // 0.5
aux %= 0.5
moeda25 = aux // 0.25
aux %= 0.25
moeda10 = aux // 0.1
aux %= 0.1
moeda5 = aux // 0.05
aux %= 0.05
moeda01 = aux / 0.01

print("NOTAS:")
print(f"{nota100:.0f} nota(s) de R$ 100.00")
print(f"{nota50:.0f} nota(s) de R$ 50.00")
print(f"{nota20:.0f} nota(s) de R$ 20.00")
print(f"{nota10:.0f} nota(s) de R$ 10.00")
print(f"{nota5:.0f} nota(s) de R$ 5.00")
print(f"{nota2:.0f} nota(s) de R$ 2.00")
print("MOEDAS:")
print(f"{moeda1:.0f} moeda(s) de R$ 1.00")
print(f"{moeda50:.0f} moeda(s) de R$ 0.50")
print(f"{moeda25:.0f} moeda(s) de R$ 0.25")
print(f"{moeda10:.0f} moeda(s) de R$ 0.10")
print(f"{moeda5:.0f} moeda(s) de R$ 0.05")
print(f"{moeda01:.0f} moeda(s) de R$ 0.01")
