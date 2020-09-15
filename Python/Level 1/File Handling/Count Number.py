fn=input()
file=open(fn,"w+")
n=int(input())
for i in range (0,n):
  s=input()
  file.write('\n')
  file.write(s)
file.close()
fn=input()
file=open(fn,"r")
text=file.read()
count=0
for i in text:
  if (i.isdigit()):
    count+=1
print(count)