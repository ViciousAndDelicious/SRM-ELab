s1 = int(input())
s2 = int(input())
l1=[]
l2=[]
for i in range(s1):
  l1.append(input())
for j in range(s2):
  l2.append(input())
print("Length of First List", len(l1))
print("Length of Second", len(l2))
print("First List Data", *l1, sep = '\n')
print("Second List Data", *l2, sep = '\n')