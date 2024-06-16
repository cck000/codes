n = int(input())

for x in range(n):
    d = input()
    cafe = input()
    almoco = input()

    h = cafe + almoco
    for letra in h:
        if letra not in d:
            d = "CHEATER"
            break
        else:
            d = d.replace(letra, "")

    if d != "CHEATER":
        d = "".join(sorted(d))

    print(d)
