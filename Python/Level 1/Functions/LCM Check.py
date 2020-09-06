n = []
for i in range(2):
  n.append(int(input()))
n.sort()
big = n[1]
while(True):
  if((big % n[0] == 0) and (big % n[1] == 0)):
    lcm = big
    break
  big += 1
  
  
print("LCM is:", big)