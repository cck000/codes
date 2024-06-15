hora_ini , hora_fim = map(int, input().split())

if hora_ini < hora_fim:
    hora_total = hora_fim - hora_ini
    print(f"O JOGO DUROU {hora_total} HORA(S)")
elif hora_ini > hora_fim:
    hora_total = 24 - (hora_ini- hora_fim)
    print(f"O JOGO DUROU {hora_total} HORA(S)")
elif hora_ini == 0 and hora_fim == 0 or hora_ini == hora_fim:
    print(f"O JOGO DUROU 24 HORA(S)")