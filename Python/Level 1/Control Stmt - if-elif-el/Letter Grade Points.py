def grd_pt(grd):
    if(grd == 'A+'):
      print("4.0")
    elif (grd == 'A'):
      print("4.0")
    elif (grd == 'A-'):
      print("3.7")
    elif (grd == 'B+'):
      print("3.3")
    elif (grd == 'B'):
      print("3.0")
    elif (grd == 'B-'):
      print("2.7")
    elif (grd == "C+"):
      print("2.3")
    elif (grd=='C'):
      print("2.0")
    elif (grd == "C-"):
      print("1.7")
    elif (grd=='D+'):
      print("1.3")
    elif (grd == "D"):
      print("1.0")
    elif (grd=='F'):
      print("0")
    
    
grd = input()
grd_pt(grd)
