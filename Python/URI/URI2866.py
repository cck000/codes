for _ in range(int(input())):

    A = input()
    palavra =  ""

    for i in A:
        if i.islower():
            palavra += i

    print(palavra[::-1])   