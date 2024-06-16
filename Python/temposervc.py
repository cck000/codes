#Programa que calcula o tempo de serviço pegando a data de inicio e os dias trabalhados 

dia, mes , ano = map(int,input().split("/"))
dia_trab = int(input())


dia_total = dia + dia_trab

ano_total = (dia_total // 365)  + ano
dia_total %= 365

mes_total = dia_total // 31 + mes
dia_total = (dia_total - 1) %30 +1 #Duas operações para impedir dia 0


mes_formatado = (mes_total -1) %12 +1 #Formatação para imperdir saída de, por exemplo, 13 meses
ano_formatado = ano_total + (mes_total //13) #Formatação para virada de ano, por exemplo, 12/12/2022 + 30 dias -> 12/1/2023


print(f"A data com os dias trabalhos é {dia_total}/{mes_formatado}/{ano_formatado}")