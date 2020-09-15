def bubbleSort(arr): 
  n = len(arr) 
  for i in range(n): 
    for j in range(0, n-i-1): 
      if arr[j] > arr[j+1] : 
        arr[j], arr[j+1] = arr[j+1], arr[j] 
        
    if (i==2):
      print(*arr, sep = ' ')

arr=[]        
for i in range(int(input())):
  arr.append(int(input()))
  
bubbleSort(arr) 
  
print ("Sorted array:") 
print(*arr, sep=' ') 