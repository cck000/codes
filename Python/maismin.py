#programa que adiciona minutos a um horario fornecido
#Entrada: hh:mm:ss e minutos que irão ser adicionados
hora, minuto, segundo = map(int, input().split(":"))

minuto_adicional= int(input())

minuto_total = minuto_adicional + minuto 

segundo_total = minuto_total // (60*60 ) + segundo 

minuto_total %= (60*60) 

horas_total = minuto_total// 60 

minuto_total %= 60

horas_formatadas = (hora + horas_total) % 24 #formatação para impedir que horas>=24



print(f"A hora com minutos adicionados é {horas_formatadas}:{minuto_total}:{segundo_total}")