#bee 1049

entrada = []

for i in range(3): 
    entrada.append(input())

if entrada[0] == "vertebrado":
    if entrada[1] == "ave":
        if entrada[2] == "carnivoro":
            print("aguia")
        else:
            print("pomba")
    else:
        if entrada[2] == "onivoro":
            print("homem")
        else: 
            print("vaca")
else:
    if entrada[1] == "inseto":
        if entrada[2] == "hematofago":
            print("pulga")
        else:
            print("lagarta")
    else:
        if entrada[2] == "hematofago":
            print("sanguessuga")
        else:
            print("minhoca")