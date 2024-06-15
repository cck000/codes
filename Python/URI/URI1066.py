x = 0 #PAR
y = 0 #IMPAR
a = 0 #POSITIVO
b = 0 #NEGARTIVO
for i in range(5):
    n = int(input())

    x = x + 1 if (n % 2 == 0) else x
    y = y + 1 if (n % 2 != 0) else y
    a = a + 1 if n > 0 else a
    b = b + 1 if n < 0 else b

print(f"{x} valor(es) par(es)\n{y} valor(es) impar(es)\n{a} valor(es) positivo(s)\n{b} valor(es) negativo(s)")