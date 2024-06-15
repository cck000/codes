a , b = map(int, input().split())

if a > b:
    maior = a
else:
    maior = b

if maior%a == 0 and maior%b ==0:
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")