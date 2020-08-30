l = []
for i in range(int(input())):
  l.append(int(input()))
search = int(input())
count = 0
for num in l:
  if num == search:
    count = count +1
print('Count=', count)
  