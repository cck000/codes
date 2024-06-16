a , b , c = map(float, input().split())

A = [a,b,c]
A.sort(reverse=True)



if A[0] >= A[1]+ A[2]:
   print("NAO FORMA TRIANGULO")
else:
    if (A[0]**2) == (A[1]**2) + (A[2]**2):
        print("TRIANGULO RETANGULO")
    if (A[0]**2) > (A[1]**2) + (A[2]**2):
        print("TRIANGULO OBTUSANGULO")
    if (A[0]**2) < (A[1]**2) + (A[2]**2):
        print("TRIANGULO ACUTANGULO")
    if A[0] == A[2] == A[1]:
        print("TRIANGULO EQUILATERO")
    if A[0] == A[1] != A[2] or A[0] == A[2] != A[1] or A[1] == A[2] != A[0]:
        print("TRIANGULO ISOSCELES")
