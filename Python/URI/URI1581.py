casos = int(input())

for i in range(casos):
    nacionalidades = []
    n_pessoas = int(input())
    for p in range(n_pessoas):
        nacionalidades.append(input())

    if any(nacionalidades.count(x) >= n_pessoas for x in nacionalidades) :

        print(nacionalidades[0])

    else:
 
        print("ingles")