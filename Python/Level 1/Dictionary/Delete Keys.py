d1=dict()
d2=dict()
d3=dict()
d4=dict()
keys=int(input())
temp = keys
values=int(input())
d1[keys]=values
list = [(k, v) for k, v in d1.items()]  
print("First Dictionary")
print(d1)

keys=int(input())
values=int(input())
d2[keys]=values
print("Second Dictionary")
print(d2)

keys=int(input())
values=int(input())
d3[keys]=values
print("Third Dictionary")
print(d3)

keys=int(input())
values=int(input())
d4[keys]=values
print("Fourth Dictionary")
print(d4)

d3.update(d4)
d2.update(d3)
d1.update(d2)

print("Concatenated dictionary is")
print(d1)


try:
  d1.pop(int(input()))
  print("Updated dictionary")
  print(d1)
except:
  print("Key not found")

