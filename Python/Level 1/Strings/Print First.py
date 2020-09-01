from collections import OrderedDict
for i in range (int(input())):
  un = ''.join(OrderedDict.fromkeys( input()).keys())
  print(un)