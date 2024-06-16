hora_ini, min_ini , hora_fim , min_fim = map(int, input().split())

hora_convertida = ((hora_fim*60) + min_fim) - ((hora_ini*60) + min_ini)

hora_convertida = (hora_convertida + (24 * 60)) if hora_convertida <= 0 else hora_convertida

hora_total = hora_convertida // 60
min_total = hora_convertida % 60

print(f"O JOGO DUROU {hora_total:.0f} HORA(S) E {min_total:.0f} MINUTO(S)")
