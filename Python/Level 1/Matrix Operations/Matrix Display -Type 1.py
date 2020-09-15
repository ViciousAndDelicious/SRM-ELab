R = int(input()) 
C = int(input()) 
 
matrix = []

for i in range(2):
  matrix = [[int(input()) for x in range (C)] for y in range(R)]

  print('Matrix', i+1)
  print(*matrix, sep = "\n") 