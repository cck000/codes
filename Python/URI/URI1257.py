abc = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]

for i in range(int(input())):
    linhas = int(input())
    soma  = 0

    for j in range(linhas):

        texto = input()

        letra = 0

        for caracter in texto:

            soma += abc.index(caracter) + j + letra

            letra +=1
    
    print(soma)
