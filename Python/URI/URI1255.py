for _ in range(int(input())):
    texto = input().lower()
    texto = texto.replace(" ", "")
    frequencias = [0] * 26
    max_frequencia = 0
    

    
    for letra in texto:
        if letra.isalpha(): 
            indice = ord(letra) - ord('a')
            frequencias[indice] += 1
            max_frequencia = max(max_frequencia, frequencias[indice])
    
    letras_mais_frequentes = []
    for i in range(26):
        if frequencias[i] == max_frequencia:
            letras_mais_frequentes.append(chr(i + ord('a')))
    
    resultado = "".join(sorted(letras_mais_frequentes))
    print(resultado)