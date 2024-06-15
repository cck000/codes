x = 0
for i in range(5):
    n = int(input())

    x = x + 1 if (n % 2 == 0) else x


print(f"{x} valores pares")