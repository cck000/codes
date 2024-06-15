alunos, litros_min, consumo = map(int, input().split())
l = litros_min
cafe = alunos *(consumo/1000)
while cafe > l:
    l += litros_min

else:
    print(l)
