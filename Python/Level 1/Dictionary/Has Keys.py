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
search = int(input())
for num in res.keys():
  if num==search:
    print("True")
    flag = 1
if(flag == 0):
  print("False")