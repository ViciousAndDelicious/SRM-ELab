l = []
temp = 1
while(temp!=0):
  temp = int(input())
  if (temp!=0):
    l.append(temp)
l.sort()
print(*l, sep='\n')
  