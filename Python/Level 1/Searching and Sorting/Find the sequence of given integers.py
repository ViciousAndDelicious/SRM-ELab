a = []
for i in range(int(input())):
  a.append(int(input()))
a.sort()
print("Sequence of integers:", a[0]-1, "to", a[-1]+1)