import numpy as np


arr1= np.array([[1,2],
                [3,4]])

arr2= np.array([[-1,-2],
                [-3,-4]])

# vertical
# [[  1 ,  2  ]
#  [  3 ,  4  ]
#  [ -1 , -2  ]
#  [ -3 , -4  ]]
arr3= np.vstack((arr1, arr2))
print("vertical stack arr1 and arr2:\n", arr3)
print()

# horizonal
# [[  1 ,  2 , -1 , -2  ]
#  [  3 ,  4 , -3 , -4  ]]
arr4= np.hstack((arr1, arr2))
print("horizonal stack arr1 and arr2:\n", arr4)
print()
