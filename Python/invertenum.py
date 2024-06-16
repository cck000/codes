#Programa que inverte a ordem dos números

n = int(input())

valor1 = n % 10
resto = n // 10
valor2 = resto % 10
resto = n // 100
valor3 = resto % 10
resto = n // 1000
valor4 = resto % 10

print(f"{valor1}{valor2}{valor3}{valor4}")