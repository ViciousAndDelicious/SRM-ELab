fn=input()
file=open(fn,"w+")
n=int(input())
for i in range (0,n):
  s=input()
  file.write('\n')
  file.write(s)
file.close()
file=open(fn,"r")
print(file.read())
file.close()
print('Number of lines:')
print(n)