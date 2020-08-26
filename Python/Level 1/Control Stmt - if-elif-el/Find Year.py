a = int(input())
if (a%4==0) :
  if(a%100==0):
    if(a%400==0):
      print(a,"is a leap year")
    else:
      print(a,"is a not a leap year")
  else:
    print(a,"is a leap year")
else:
  print(a,"is not a leap year")
    
