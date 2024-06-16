pos = 0
x = 0
for i in range(1,100+1):
  n = int(input())

  if(n > x) :
   x = n 
   pos = i

  else:
    x = x
    
print(x)
print(pos)