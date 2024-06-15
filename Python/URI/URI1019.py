n = int(input())

s =int( n % 60)
n =n / 60
m = int(n % 60)
n = n / 60
h = int(n)

print("{}:{}:{}".format(h, m, s))