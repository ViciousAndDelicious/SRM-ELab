l = []
temp = 1
while(temp!=0):
  temp = int(input())
  if (temp!=0):
    l.append(temp)
print(*l[::-1], sep='\n')
  