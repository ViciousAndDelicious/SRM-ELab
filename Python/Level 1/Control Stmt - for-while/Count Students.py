count = 0
age = []
wt = []
for i in range (int(input())):
  age.append(int(input()))
  wt.append(int(input()))
  if (age[i] < 25) and (wt[i] < 50) :
    count = count + 1
print("Count:", count)
  
  
  
  