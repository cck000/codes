div = int(input())
div_atual = input().split()
resto = 0
for i in range(div):
    resto += int(div_atual[i]) - 1

print(resto)
