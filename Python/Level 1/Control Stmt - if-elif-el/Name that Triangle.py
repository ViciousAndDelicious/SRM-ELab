l = []
flag = 0
for i in range(3):    
  l.append(int(input()))
if (l[0] == l[1]):
  if (l[1] == l[2]):
    print("equilateral")
    flag = 1
  else:
    print("isosceles")
    flag = 2

if (l[1] == l[2]):
  if (l[2] == l[0]):
    if(flag!=1):
      print("equilateral")
  else:
    print("isosceles")
    flag = 1
if(flag==0) :
  print("scalene")
