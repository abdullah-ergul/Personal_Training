import numpy as np


array= np.array([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15])  # 1*15 vector
print("array:\n",array)
print("array shape: ", array.shape)

print()

matrix= array.reshape(3,5)
print("matrix:\n", matrix)
print("matrix shape: ", matrix.shape)
print("matrix dimension: ", matrix.ndim)
print("matrix data type: ", matrix.dtype.name)
print("matrix size: ", matrix.size)
print("matrix type: ", type(matrix))

print()

arr1= np.array([[1,2,3,4], [5,6,7,8], [9,10,11,12]])
print("arr1 shape: " ,arr1.shape)

print()

arr2= np.zeros((3,4))
print("arr2:\n", arr2)
arr2[0,0]= 5
print("arr2:\n", arr2)

print()

arr3= np.ones((3,4))
print("arr3:\n",arr3)

print()

arr4= np.empty((3,4))
print("arr4:\n",arr4)

print()

arr5= np.arange(10, 50, 5)  # [10,50) --> +5 +5
print("arr5:\n", arr5)

print()

arr6= np.linspace(10, 50, 20)  # [10,50] --> size= 20
print("arr6:\n", arr6)
