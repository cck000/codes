count = 1
while True:
    n = int(input())
    if n == 0:
        break
    dif = 0
    print(f"Teste {count}")
    for i in range(n):
        x , y = map(int, input().split())

        dif += x - y
        print(dif)
    print()
    count += 1