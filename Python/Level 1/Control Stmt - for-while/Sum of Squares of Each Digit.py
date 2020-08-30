num = int(input())
res = 0
while (num!=0):
  res = res+pow((num%10),2)
  num = (int)(num/10)
print(res)