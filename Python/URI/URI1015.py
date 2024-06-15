p = input().split()

p1 = [float(p[0]), float(p[1])]

p = input().split()

p2 = [float(p[0]), float(p[1])]

distancia = ((p1[0]-p2[0])* (p1[0]-p2[0]) + ((p1[1]-p2[1])* (p1[1]-p2[1]))) **0.5

print("%.4f" %distancia)