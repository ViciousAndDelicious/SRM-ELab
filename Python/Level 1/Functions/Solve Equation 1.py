import math
t = int(input())
x = int(input())
res = 1
for i in range(2, t+1):
  res=res+((x**i)/i)
print(round(res, 2))