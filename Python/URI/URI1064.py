x = 0
m = 0
for i in range(6):
    n = float(input())

    x = x + 1 if n > 0 else x 
    m = m + n if n > 0 else m

m = m/x
print(f"{x:.0f} valores positivos\n{m:.1f}")