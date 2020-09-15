m=['Mar','Jun','Sep','Dec']
d=[20,21,22,21]
mon=input()
dat=int(input())
if (mon==m[0] and dat==d[0]):
  print('Summer')
if (mon==m[1] and dat==d[1]):
  print('Spring')
if (mon==m[2] and dat==d[2]):
  print('Fall')
if (mon==m[3] and dat==d[3]):
  print('Winter')