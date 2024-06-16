# Programa que le um número inteiro e calcula e imprime a soma dos dois 
# dígitos menos significativo do número lido (mais a direita). 

num = int(input())

umDigito = num % 10

doisDigito = (num // 10) % 10

soma = umDigito + doisDigito

print(f"{soma}")

