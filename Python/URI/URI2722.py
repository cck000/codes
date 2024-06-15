for _ in range(int(input())):

    A = input()
    B = input()
    nome = ""
    for i in range( 0 ,len(A)- 1 , 2): # i USADO PARA PEGAR DOIS EM DOIS DE CADA LINHA
        nome += A[i:i+2] + B[i:i+2] 

    print(nome)