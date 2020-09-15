n=int(input())
lst=list(map(int, input().split()))
lst.sort()
print('Sorted List:')
print(lst)
lst2=[]
for i in range (0,n-1):
  v=lst[i+1]-lst[i]
  lst2.append(v)
print('Sequence of increments:')
print(lst2)