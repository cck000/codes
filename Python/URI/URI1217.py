x = int(input())
valor_total = 0
fruta_total = 0

for i in range(1, x+1):
    valor_gasto = float(input())
    frutas = input().split()

    kg_fruta = len(frutas)
    print(f"day {i}: {kg_fruta} kg")
    valor_total += valor_gasto
    fruta_total += kg_fruta

valor_total /= x
fruta_total /= x
print(f"{fruta_total:.2f} kg by day\nR$ {valor_total:.2f} by day")