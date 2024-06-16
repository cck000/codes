renda = float(input())

if renda < 2000:
    print("Isento")

if 2000.01 <= renda <= 3000:
    renda -= 2000
    imposto = renda *0.08
    print(f"R$ {imposto:.2f}")
if 3000.01 <= renda <= 4500:
    renda -=  3000 
    imposto = renda * 0.18 + 1000*0.08
    print(f"R$ {imposto:.2f}")

if renda > 4500:
    renda -= 4500 
    imposto = renda * 0.28 + 1500*0.18 + 1000 * 0.08
    print(f"R$ {imposto:.2f}")
