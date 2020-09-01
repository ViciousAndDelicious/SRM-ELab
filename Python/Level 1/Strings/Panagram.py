a = input()
if (len(set(a.lower())) == 27):
  print("The string is a pangram")
else:
  print("The string is not a pangram")