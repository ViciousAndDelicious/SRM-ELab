fn=input()
file=open(fn,"w+")
for i in range (4):
  s=input()
  file.write(s)
file.close()
file=open(fn,"r")
print(file.read())