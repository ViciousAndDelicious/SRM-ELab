lst=[]
n=int(input())
for i in range (0,n):
  v=int(input())
  lst.append(v)
lst.sort()
print(*lst,sep="\n")