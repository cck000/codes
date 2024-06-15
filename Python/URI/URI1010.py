p = input().split()

pd = input().split()

p1 = [int(p[0]), int(p[1]), float(p[2])]
p2 = [int(pd[0]), int(pd[1]), float(pd[2])]
total = (p1[1]*p1[2]) + (p2[1]*p2[2])

print("VALOR A PAGAR: R$ %.2f" %total)
