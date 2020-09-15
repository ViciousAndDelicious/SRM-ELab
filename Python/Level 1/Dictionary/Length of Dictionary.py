keys=[]
values=[]
for i in range (int(input())):
  keys.append(int(input()))
for j in range (len(keys)):
  values.append(int(input()))
print("The dictionary is")
res = dict(zip(keys, values))
print(res)
print("Length of dictionary is")
print(len(res))