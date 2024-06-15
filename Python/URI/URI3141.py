nome = input()
data_atual = input().split("/")
data_nasc = input().split("/")

idade = int(data_atual[2]) - int(data_nasc[2])
if data_atual[0] == data_nasc[0] and data_atual[1] == data_nasc[1]:
    print("Feliz aniversario!")
    print(f"Voce tem {idade} anos {nome}.")

elif data_atual[1] > data_nasc[1] :
    print(f"Voce tem {idade} anos {nome}.")

elif data_atual[1] == data_nasc[1] :
     if data_atual[0] < data_nasc[0]:
        idade = idade - 1
        print(f"Voce tem {idade} anos {nome}.")
     else:
         print(f"Voce tem {idade} anos {nome}.")
else: 
    idade = idade - 1
    print(f"Voce tem {idade} anos {nome}.")
