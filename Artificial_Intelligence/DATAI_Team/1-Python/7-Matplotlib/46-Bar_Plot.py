import matplotlib.pyplot as plt
import numpy as np


#1
x = np.array([1,2,3,4,5,6,7])
y = x*2+5

plt.bar(x,y)
plt.title("Bar Plot 1")
plt.xlabel("x")
plt.ylabel("y")
plt.show()

#2
a = ["Turkey","USA","China","Russia","Japan","UK","Germany"]
x = np.array([1,2,3,4,5,6,7])
y = x*2+5

plt.bar(a,y)
plt.title("Bar Plot 2")
plt.xlabel("Countries")
plt.ylabel("y")
plt.show()
