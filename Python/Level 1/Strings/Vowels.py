s = input()
count = 0
vow = ['a', 'e', 'i', 'o', 'u']
for char in s:
  if char in vow:
    count = count + 1
    
print('Number of vowels are\n',count, sep = '')  