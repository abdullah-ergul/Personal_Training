import numpy as np


arr1= np.array([1,2,3,4,5,6,7])

print("arr1:\n", arr1[0:4])  # [0,4) index wii printed
print()
arr1_rev= arr1[::-1]
print("arr1 rev:\n", arr1_rev)

print()

arr2= np.array([[1,2,3,4,],[6,7,8,9,10]])
print(arr2[1,1])
print(arr2[:,1])  # all lines, 1st column
print(arr2[1,1:4])  # 1st line, 1 to 3 columns
print(arr2[-1,:])  # last line, all columns
print(arr2[:, -1]) # all lines, last column
