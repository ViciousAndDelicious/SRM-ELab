import math
lw = int(input())
ul = int(input())
l = []
temp = 0
for i in range(lw, ul+1):
  if ((math.sqrt(i))%1 == 0) :
    res = 0
    temp = i
    while (temp!=0):
      res = res+(temp%10)
      temp=(int)(temp/10)
    if (res<10):
      l.append(i)
print(*l, sep=' ')