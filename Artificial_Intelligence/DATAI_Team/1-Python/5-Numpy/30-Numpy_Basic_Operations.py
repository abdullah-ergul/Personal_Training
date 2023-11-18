import numpy as np


arr1= np.array([1,2,3])
arr2= np.array([4,5,6])

print(arr1 + arr2)
print(arr1 - arr2)
print(arr1 ** 2)
print(np.sin(arr1))
print(arr1<2)

print()

arr3= np.array([[1,2,3],[4,5,6]])
arr4= np.array([[7,8,9],[10,11,12]])

print("arr3 and arr4 's variables multiple:\n", arr3 * arr4)
print()

print("arr4 transpose:\n", arr4.T)
print()

# ! print(arr3.dot(b))  # (2*3 x 2*3) thoose matrixes can't multiple, cause of 2*3 x 2*3  --> 2*(3 x 2)*3, 3 and 2 not equals
print("arr3 and arr4 matrix multiple:\n", arr3.dot(arr4.T))  # 2*3 x 3*2 matrixes can multiple
print()

arr5= np.random.random((5,5))  # (0,1) random 5*5 matrix
print("arr5:\n", arr5)
print()

arr6= np.array([[1,2,3,4,5],[6,7,8,9,10],[11,12,13,14,15],[16,17,18,19,20],[21,22,23,24,25]])

print("arr6 sum all variables:\n", arr6.sum)
print("arr6 max:\n", arr6.max)
print("arr6 min:\n", arr6.min)

print("arr6 line sum:\n", arr6.sum(axis=0))  # line sum
print()
print("arr6 column sum:\n", arr6.sum(axis=1))  # column sum
print()

print("arr6 sqrt:\n", np.sqrt(arr6))
print()
print("arr6 square:\n", np.square(arr6))
print()
print("arr6 + arr6:\n", np.add(arr6,arr6))
