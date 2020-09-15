d1 = {2:4,3:9,4:16,5:25}
try:
  d1.pop(int(input()))
  print(d1)
except:
  print("Key not found")