# need this library for generating random samples
import numpy as np

#counting the number of items we want to generate
count = 0

#keep the priorities
lst = []

# adding '1' to '9' to the begining of this list
for i in range(49,58):
  lst.append(chr(i))

# adding 'a' to 'z' as well
for i in range(97,123):
  lst.append(chr(i))

#we need 28 samples 
while count < 28:
  #picking 5 items with replacement from 35 items in the list 'lst'
  new_list = np.random.choice(35,5)
  #convert the numbers into values between '1' and 'z' and keeping them in a new list
  new_list_print = []
  for i in range(5):
    new_list_print.append( lst[int(new_list[i])])    
  #check if the first and the third items are 'a'. If they are we need to use another sample
  if new_list_print[0] == 'a' or new_list_print[2] == 'a':
    continue
  #printing
  print(','.join(map(str,  new_list)))
  print(','.join( new_list_print) )
  print('')
  count += 1
