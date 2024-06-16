#algumas funções aleatórias

def gera_matriz(num_linhas, num_colunas, valor):
    '''
    Parametros -> (int, int, valor)\n
    CRIA UMA MATRIZ DE X LINHAS E COLUNAS DESEJADAS
    COM VALORES IGUAIS DEFINIDOS PELO USUARIO

    '''
    matriz = []
    for i in range(num_linhas):
        linha = []

        for j in range(num_colunas):
            linha.append(valor)
        
        matriz.append(linha)
    
    return matriz

def cria_matriz():
    '''
    
    CRIA UMA MATRIZ DE X LINHAS E COLUNAS DESEJADAS
    COM CADA VALOR DEFINIDO PELO USUARIO
    
    '''
    num_linhas, num_colunas = map(int, input().split())
    matriz = []
    for i in range(num_linhas):
        
        linha = input().split()
        
        matriz.append(linha)
    
    return matriz



def imprime_matriz(matriz):
    '''
    Paramentro -> [[]]\n
    IMPRIME A MATRIZ LINHA POR LINHA AO INVES DE SER NA MESMA LINHA USANDO PRINT
    '''
    for i in range(len(matriz)):
        print(matriz[i])
    

def soma_matriz(matriz_a, matriz_b):

    '''
    Parametros -> (int(matriz_a), int(matriz_b))
    
    SOMA DUAS MATRIZES

    '''
    matriz_c = gera_matriz(len(matriz_a), len(matriz_a[0]), 0)

    for lin in range(len(matriz_a)):
        for col in range(len(matriz_a[0])):
            matriz_c[lin][col] = int(matriz_a[lin][col]) + int(matriz_b[lin][col])

    return matriz_c

def multi_matriz(matriz_a, matriz_b):

    '''
    Parametros -> (int(matriz_a), int(matriz_b))
    
    MULTIPLICA DUAS MATRIZES

    '''

    n_lin_A, n_col_A = len(matriz_a), len(matriz_a[0])
    n_lin_B, n_col_B = len(matriz_b), len(matriz_b[0])
    assert n_col_A == n_lin_B

    c = []


    for linha in range(n_lin_A):

        c.append([])
        for coluna in range(n_col_B):
            c[linha].append(0)

            for i in range(n_col_A):
                c[linha][coluna] += int(matriz_a[linha][i]) * int(matriz_b[i][coluna])

    return c

def somamulti_matriz_lista(matriz, lista):
    '''
    Parametro -> (int(matriz), int(lista))\n

    MULTIPLICA OS ELEMENTOS DE UMA MATRIZ COM UMA LISTA\n
    COM A MESMA QUANTIDADE DE COLUNAS\n
    SOMA O RESULTADO DA MULTIPLICAO E CRIA UMA LISTA COM ESSES VALORES
    
    '''
    total = []
    for i in range(len(matriz)):
        aux = 0

        for j in range(len(matriz[0])):
            aux += int(matriz[i][j]) * int(lista[j])

        total.append(aux)

    return total    

def calcula_mdc(n1, n2):
    '''
    Parametros = int(n1), int (n2)\n
    PROGRAMA QUE CALCULA O MAXIMO DIVISOR COMUM ENTRE DOIS INTEIROS
    '''
    while n2 != 0:
        
        n1, n2 = n2, n1 % n2

    return n1

def distancia(x,y,u,v):

  ##calcula a distancia entre dois pontos

    res = ((u-x)**2 + (v-y)**2)**0.5

    return res

def bubble_sort(arr):

    '''
    parametro -> vetor

    função que organiza os dados em uma lista utilizano o métpdp bubble
    
    '''
    n = len(arr)
    
    for i in range(n):
        # Últimos i elementos já estão no lugar certo
        for j in range(0, n - i - 1):
            # Percorre o array da esquerda para a direita
            # Troca os elementos se o elemento atual for maior que o próximo
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    
    return arr

def insertion_sort(arr):


    '''
    PARAMENTRO -> vetor

    ORGANINZA UM VETOR COM O MÉTODO INSERTION SORT

    '''
    n = len(arr)
    
    for i in range(1, n):
        key = arr[i]
        j = i - 1
        
        # Move os elementos maiores que a chave para a direita
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        
        # Insere a chave na posição correta
        arr[j + 1] = key
    
    return arr


def selection_sort(arr):


    '''
    PARAMETRO -> VETOR

    ORGANIZA UM VETOR UTILIZANDO O METODO SELECTION SORT
    
    '''
    n = len(arr)
    
    for i in range(n):
        # Encontra o índice do elemento mínimo não ordenado
        min_index = i
        for j in range(i+1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        
        # Troca o elemento mínimo com o primeiro elemento não ordenado
        arr[i], arr[min_index] = arr[min_index], arr[i]
    
    return arr

