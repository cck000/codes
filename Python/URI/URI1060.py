x = 0
for i in range(6):
    n = float(input())

    x = x if n <= 0 else x + 1
    

print(f"{x:.0f} valores positivos")