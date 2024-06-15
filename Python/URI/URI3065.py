cont = 1
while int(input()) != 0:
    conta = input()
    resultado = 0
    
    conta = conta.replace("+", " +" ).replace("-", " -")
    conta = conta.split()
 
    for k in conta:
        resultado += int(k)

    print(f"Teste {cont}\n{resultado}")
    print()
    cont += 1