a = input()
lc = 0
uc = 0
for char in a:
  if char.islower():
    lc = lc+1
  if char.isupper():
    uc = uc+1
print(lc)
print(uc)