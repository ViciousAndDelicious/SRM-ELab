a = []
for i in range(int(input())):
  a.append(int(input()))
  
s = []
for i in range(int(input())):
  s.append(int(input()))
  
try:
  for num in a:
    if num == s[0]:
      start = a.index(num)
    if num == s[-1]:
      end = a.index(num)
  print("Sequence found between index", start,"and", end+1)

except:
    print("Not found")

