s1 = int(input())
s2 = int(input())
l1 = []
l2 = []
for i in range(s1):
  l1.append(int(input()))
for j in range(s2):
  l2.append(int(input()))
print("The intersection is\n",list(set(l1) & set(l2)), end='', sep ='')

  