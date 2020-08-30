bad_chars = ["]", "-", "\\", "!", "(", ")", "{", "}", ":", "<", ">", "'", '"', "[", ";", ",", ".", "/", "?", "@", "#", "$", "%", "^", "&", "*", "_", "~"] 
  
# initializing test string  
test_string = input()
  
for i in bad_chars : 
    test_string = test_string.replace(i, '') 
  
print (str(test_string)) 