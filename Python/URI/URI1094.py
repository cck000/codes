sapo = 0
rato = 0
coelho = 0
for _ in range(int(input())):
    spc = input().split()

    if spc[1] == "S":
        sapo += int(spc[0])

    elif spc[1] == "R":
        rato += int(spc[0])
    else:
        coelho += int(spc[0])

total = coelho + rato + sapo
persapo = (sapo/total) * 100
percoelho = (coelho/total) * 100
perrato = (rato/total) * 100

print(f"Total: {total} cobaias\nTotal de coelhos: {coelho}\nTotal de ratos: {rato}\nTotal de sapos: {sapo}")
print(f"Percentual de coelhos: {percoelho:.2f} %\nPercentual de ratos: {perrato:.2f} %\nPercentual de sapos: {persapo:.2f} %")

