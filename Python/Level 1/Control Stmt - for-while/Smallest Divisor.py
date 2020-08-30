a = int(input())
print("Smallest divisor is:", end=" ")
for i in range (2, a) :
  if (a%i==0):
    print(i)
    break
  