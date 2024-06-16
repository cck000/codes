total_pcs = int(input())
pecas = input().split()

for i in range(1 , total_pcs+1):

    if str(i) not in pecas:
        falta = i

print(falta)
