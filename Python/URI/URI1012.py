p = input().split()

p1 = [float(p[0]), float(p[1]), float(p[2])]

pi = 3.14159

triangulo = (p1[0] * p1[2])/2
quadrado = p1[1] * p1[1]
circulo = pi* (p1[2] * p1[2])
retangulo = p1[0] * p1[1]
trapezio = ((p1[0] + p1[1])/2) * p1[2]

print("TRIANGULO: %.3f" %triangulo)
print("CIRCULO: %.3f" %circulo)
print("TRAPEZIO: %.3f" %trapezio)
print("QUADRADO: %.3f" %quadrado)
print("RETANGULO: %.3f" %retangulo)