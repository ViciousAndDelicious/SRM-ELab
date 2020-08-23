def richter_scale(arg):
    if(arg < 2.0):
      print("Micro")
    elif (arg >= 2.0 and arg < 3.0):
      print("Very minor")
    elif (arg >= 3.0 and arg < 4.0):
      print("Minor")
    elif (arg >= 4.0 and arg < 5.0):
      print("Light")
    elif (arg >= 5.0 and arg < 6.0):
      print("Moderate")
    elif (arg >= 6.0 and arg < 7.0):
      print("Strong")
    elif (arg >= 7.0 and arg < 8.0):
      print("Major")
    elif (arg >= 8.0 and arg < 10.0):
      print("Great")
    else:
      print("Meteoric")
    
    
inp = float(input())
richter_scale(inp)
