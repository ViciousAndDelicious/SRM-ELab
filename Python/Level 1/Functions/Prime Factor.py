a = int(input())
for i in range (2, a):
  flag = 0
  if(a % i == 0):
    if i > 1: 
      for j in range(2, i): 
        if (i % j) == 0: 
          break
      else: 
        print(i)