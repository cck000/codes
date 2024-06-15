n = 1

while True:
    try:
        par_masc = 0
        par_fem = 0
        n_calcado = input()
        caixa = input().split()
        if n > 1:
            print("")
        genero = []
        sapatos = []

        for i in range(len(caixa)):
            if caixa[i].isnumeric():
                sapatos.append(caixa[i])
            if caixa[i].isalpha():
                genero.append(caixa[i])

        for i in range(len(sapatos)):

            if sapatos[i] == n_calcado:
                if genero[i] == "M":
                    par_masc += 1
                else:
                    par_fem += 1

        par_total = par_fem + par_masc
        print(f"Caso {n}:\nPares Iguais: {par_total}\nF: {par_fem}\nM: {par_masc}")
        n += 1



    except EOFError:
        break