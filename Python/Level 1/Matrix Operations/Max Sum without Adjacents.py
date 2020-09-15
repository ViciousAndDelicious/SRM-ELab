t=int(input())
for i in range (0,t):
   n=int(input())
   for j in range (0,1):
     lst=list(map(int, input().split()))
     incl=0
     excl=0
     for k in lst:
       n_excl=excl if excl > incl else incl
       incl=excl+k
       excl=n_excl
     print(excl if excl>incl else incl)