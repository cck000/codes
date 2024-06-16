casos = int(input())

for i in range(casos):
    res = 0
    n = input()
    
    for l in n:
        if l.isalpha():
            n = n.replace(l, " ")

    numeros = n.split()
    for x in numeros:
        res += int(x)

    print(res)