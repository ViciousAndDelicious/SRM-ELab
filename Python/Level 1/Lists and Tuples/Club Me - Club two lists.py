n1 = int(input())
l1 = []
for i in range(n1):
  l1.append(int(input()))
  
n2 = int(input())
l2 = []
for i in range(n2):
  l1.append(int(input()))

l1.extend(l2)
l1.sort()
print("Sorted list is:", l1)
  