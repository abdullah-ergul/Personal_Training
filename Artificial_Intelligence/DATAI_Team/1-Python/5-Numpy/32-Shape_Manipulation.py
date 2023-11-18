import numpy as np


arr1= np.array([[1,2,3],[4,5,6],[7,8,9]])  # 3*3

arr1_ravel= arr1.ravel()  # make 1D
print("arr1 ravel:\n", arr1_ravel)
print()

arr1_ravel_reshape= arr1.reshape(3,3)
print("arr1_ravel reshape:\n", arr1_ravel_reshape)
print()

arr1T= arr1.T
print("arr1 transpose:\n", arr1T)
print()

arr2= np.array([[1,2],[3,4],[5,6]])  # 3*2 matrix

arr2_reshape= arr2.reshape(2,3)  # arr2 not changes
arr2.resize((2,3))  # arr2 will changes
