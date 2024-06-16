a , b , c = map(float, input().split())

if b + c > a :
    if a + b > c:
        if a + c > b:

            perimetro = a + b + c
            print(f"Perimetro = {perimetro:.1f}")
        else:
            area = ((a + b) * c) / 2
            print(f"Area = {area:.1f}")

    else:
        area = ((a + b) * c) / 2
        print(f"Area = {area:.1f}")

else:
    area = ((a+b)*c)/2
    print(f"Area = {area:.1f}")
