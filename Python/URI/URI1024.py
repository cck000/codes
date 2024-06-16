N = int(input())

for i in range(N):
        letra = input()
        cripto = ""
        for l in letra:
            cripto += chr(ord(l) + 3) if l.isalpha() else l
        letra = cripto[::-1]
        letra = letra[:len(letra)//2] + ''.join([chr(ord(l) - 1) for l in letra[len(letra)//2:]])
        print(letra)