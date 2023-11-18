import numpy as np


# * convert
liste= [1,2,3,4]  # list

array= np.array(liste)  # list to numpy array
liste2= list(array)  # numpy array to list


# * copy
arr= np.array([1,2,3])
arr1= arr
arr1[0]= 5  # If I change arr1's any value, arr's values will changed because numpy array's called by referances
print("arr:\n", arr)
print("arr1:\n", arr1)
print()

arr= np.array([1,2,3])
arr2= arr1.copy()  # arr2 is new numpy array
arr2[0]= 5
print("arr:\n", arr)
print("arr2:\n", arr2)
