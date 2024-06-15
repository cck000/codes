# Programa que calcula o troca da venda de bits


bits = int(input())
valor_pago = float(input())


troco = abs(bits / 100 - valor_pago)

qt_moeda1r = troco // 1
resto = round(troco % 1 ,2)

qt_moeda50c = resto // .5
resto = round(resto % .5 ,2)

qt_moeda25c = resto // .25
resto = round(resto % .25 ,2)

qt_moeda10c = resto // 0.10
resto = round(resto % 0.10 ,2)

qt_moeda5c = resto // 0.05
resto = round(resto % 0.05 ,2)

qt_moeda1c = resto // 0.01



print(f"{bits} {valor_pago:.2f}\n\nValor do Troco: R${troco:5.2f}")
print(f"{qt_moeda1r:0.0f} moeda(s) de R$ 1.00")
print(f"{qt_moeda50c:0.0f} moeda(s) de R$ 0.50")
print(f"{qt_moeda25c:0.0f} moeda(s) de R$ 0.25")
print(f"{qt_moeda10c:0.0f} moeda(s) de R$ 0.10")
print(f"{qt_moeda5c:0.0f} moeda(s) de R$ 0.05")
print(f"{qt_moeda1c:0.0f} moeda(s) de R$ 0.01")