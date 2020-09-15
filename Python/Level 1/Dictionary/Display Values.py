d1=dict()
d2=dict()
d3=dict()
d4=dict()
keys=int(input())
temp = keys
values=int(input())
d1[keys]=values
print("First Dictionary")
print(d1)

keys=int(input())
values=int(input())
d2[keys]=values
print("Second Dictionary")
print(d2)

d1.update(d2)

print("Concatenated dictionary is")
print(d1)

print("The Values of Dictionary")

l = []
for num in d1.values():
  l.append(num)
print(l)