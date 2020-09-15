keys=[]
values=[]
for i in range (int(input())):
  keys.append(int(input()))
for i in range (int(input())):
  values.append(int(input()))
res = dict(zip(keys, values))
print(res)