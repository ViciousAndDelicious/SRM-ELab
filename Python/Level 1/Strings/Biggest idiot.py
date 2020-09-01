a = input()
b = input()
if (len(a)>len(b)):
    print("Larger string is:\n", a, sep='\n')
elif (len(b)>len(a)):
    print("Larger string is:", b, sep='\n')
elif (len(a)==len(b)):  
    print("Both strings are equal")