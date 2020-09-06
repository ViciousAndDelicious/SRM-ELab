a = []
for i in range(3):
  a.append(int(input()))
a.sort()
if (a[2] >= a[0]+a[1]) :
  print("Triangle cannot be formed")
else:
  print("Yes Triangle can be formed")