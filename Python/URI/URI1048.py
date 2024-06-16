salario = float(input())
if 0 <= salario <= 400:
    salario_new = (salario + (salario*0.15))
    print(f"Novo salario: {salario_new:.2f}\nReajuste ganho: {(salario*0.15):.2f}\nEm percentual: 15 %")
elif 400.01 <= salario <= 800:   
    salario_new = (salario + (salario*0.12))
    print(f"Novo salario: {salario_new:.2f}\nReajuste ganho: {(salario*0.12):.2f}\nEm percentual: 12 %")
elif 800.01 <= salario <= 1200:  
    salario_new = (salario + (salario*0.10))
    print(f"Novo salario: {salario_new:.2f}\nReajuste ganho: {(salario*0.10):.2f}\nEm percentual: 10 %")
elif 1200.01 <= salario <= 2000:   
    salario_new = (salario + (salario*0.07)) 
    print(f"Novo salario: {salario_new:.2f}\nReajuste ganho: {(salario*0.07):.2f}\nEm percentual: 7 %")
elif salario > 2000:    
    salario_new = (salario + (salario*0.04)) 
    print(f"Novo salario: {salario_new:.2f}\nReajuste ganho: {(salario*0.04):.2f}\nEm percentual: 4 %")