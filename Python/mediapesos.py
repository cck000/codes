#calcula media com pesos

p1 = float(input())
p2 = float(input())
p3 = float(input())
t1 = float(input())
t2 = float(input())


pesop = 0.75
pesot = 0.25


mediap = (p1+p2+p3)/3
mediat = (t1+t2)/2


mediaf = (mediap*pesop)+(mediat*pesot)

#SAIDA
print(f"======= NOTAS ========\nPrimeira Prova{p1:8.1f}\nSegunda Prova{p2:9.1f}\nTerceira Prova{p3:8.1f}\nMédia Provas{mediap:10.1f}\n\nPrimeiro Trabalho{t1:5.1f}\nSegundo Trabalho{t2:6.1f}\nMédia Trabalhos{mediat:7.1f}\n----------------------\nMédia Final{mediaf:11.1f}")