fn=input()
file=open(fn,'w+')
n=int(input())
for i in range (0,n):
  s=input()
  file.write('\n')
  file.write(s)
file.close()
fn=input()
file=open(fn,'r')
text=file.read()
space=0
line=0
charc=0
num=0
for i in text:
  if (i==' '):
    space+=1
  elif (i=='\n'):
    line+=1
  elif (i.isnumeric()):
    num+=1
  else:
    charc+=1
        
print(charc)