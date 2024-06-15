cod, qtd = map(int, input().split()) 

if cod == 1:
    total = qtd*4.0
    print(f"Total: R$ {total:.2f}")

elif cod == 2:
    total = qtd*4.5
    print(f"Total: R$ {total:.2f}")
elif cod == 3:
    total = qtd*5.0
    print(f"Total: R$ {total:.2f}")
elif cod == 4:
    total = qtd*2.0
    print(f"Total: R$ {total:.2f}")
elif cod == 5:
    total = qtd*1.5
    print(f"Total: R$ {total:.2f}")