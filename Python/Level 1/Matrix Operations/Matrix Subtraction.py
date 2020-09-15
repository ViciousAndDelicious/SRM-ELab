r=int(input())
c=int(input())
m1=[]
m2=[]
m3=[]
for i in range (r):
  a=[]
  for j in range (c):
    a.append(int(input()))
  m1.append(a)
for i in range (r):
  b=[]
  for j in range (c):
  	b.append(int(input()))
  m2.append(b)

for i in range (r):
  d=[]
  for j in range (c):
    d.append(m1[i][j]-m2[i][j])
  m3.append(d)

print('Matrix 1')
  
for i in range (r):
  for j in range (c):
    print(m1[i][j], end = ' ')
  print()
  
print('Matrix 2')
  
for i in range (r):
  for j in range (c):
    print(m2[i][j], end = ' ')
  print()
  
print('Difference of Matrix')

for i in range (r):
  for j in range (c):
    print(m3[i][j], end = ' ')
  print()
