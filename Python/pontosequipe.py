#calcula pontos de equipes em uma competição


def pontua_etapa(a, b):

    total = max(a,b) - min(a,b) 
    pontos = 0
    if total < 3:
        pontos = 100
    elif 3 <= total <= 5:
        pontos = 80
    elif total > 5:
        pontos = 80 - ((total - 5)/5)
    
    return pontos

t1, t2, t3, equipes = map(int, input().split())
pontos_equipes = {}
maior_pontuacao = 0
equipe_vencedora = ""
for equipe in range(1, equipes + 1):
    
    
   
    n, tg1, tg2, tg3 = map(int, input().split())
    
    
    pontos_etapa1 = pontua_etapa(t1, tg1)
    pontos_etapa2 = pontua_etapa(t2, tg2)
    pontos_etapa3 = pontua_etapa(t3, tg3)
    
   
    soma_pontos  = pontos_etapa1 + pontos_etapa2 + pontos_etapa3
    pontos_equipes[equipe] = soma_pontos
    
    
    if soma_pontos > maior_pontuacao:
        maior_pontuacao = soma_pontos
        equipe_vencedora = (equipe + 100)-1



for equipe, pontos in pontos_equipes.items():
    print((equipe+99), format(pontos, ".1f"))
    
print(f"Equipe vencedora: {equipe_vencedora} - Pontuação: {maior_pontuacao:0.1f}")