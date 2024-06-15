x , n = map(int, input().split())
D = x
E = x
F = x

for _ in range(n):

    opera = input().split()
    
    if opera[0] == "C":
        if opera[1] == "D":
            D = D - int(opera[2])
        if opera[1] == "E":
            E = E - int(opera[2])
        if opera[1] == "F":
            F = F - int(opera[2])
    if opera[0] == "V":
        if opera[1] == "D":
            D = D + int(opera[2])
        if opera[1] == "E":
            E = E + int(opera[2])
        if opera[1] == "F":
            F = F + int(opera[2])
    if opera[0] == "A":
        if opera[1] == "D" and opera[2] == "E":
            D = D + int(opera[3])
            E = E - int(opera[3])
        if opera[1] == "D" and opera[2] == "F":
            D = D + int(opera[3])
            F = F - int(opera[3])
        if opera[1] == "E" and opera[2] == "D":
            E = E + int(opera[3])
            D = D - int(opera[3])
        if opera[1] == "E" and opera[2] == "F":
            E = E + int(opera[3])
            F = F - int(opera[3])
        if opera[1] == "F" and opera[2] == "D":
            F = F + int(opera[3])
            D = D - int(opera[3])
        if opera[1] == "F" and opera[2] == "E":
            F = F + int(opera[3])
            E = E - int(opera[3])


print(D, E, F)









