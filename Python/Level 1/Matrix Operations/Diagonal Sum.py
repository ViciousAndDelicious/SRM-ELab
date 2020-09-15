R = int(input()) 
C = int(input()) 
 
matrix = []

matrix = [[int(input()) for x in range (C)] for y in range(R)]


sum = 0
for i in range(R):  
  for j in range(C):
    if (i==j):
      sum = sum + matrix[i][j]
print(sum)