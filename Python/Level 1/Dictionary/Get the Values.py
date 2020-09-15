flag = 0
keys=[]
values=[]
for i in range (int(input())):
  keys.append(int(input()))
for i in range (len(keys)):
  values.append(int(input()))
res = dict(zip(keys, values))
print("The dictionary is")
print(res)
print(res[int(input())])