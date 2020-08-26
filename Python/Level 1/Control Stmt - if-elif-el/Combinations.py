from itertools import permutations 
  
lst = []  
for i in range(3):
  lst.append(int(input()))
  
perm = permutations(lst) 

for i in list(perm): 
    print(*i) 
