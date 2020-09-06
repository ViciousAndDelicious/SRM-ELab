lim = int(input())
res = 1.00
for i in range (2, lim+1):
  res = res + (1/i) 
print(round(res,2))