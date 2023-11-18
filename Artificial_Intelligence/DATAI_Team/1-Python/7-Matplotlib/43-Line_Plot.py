import matplotlib.pyplot as plt
import pandas as pd


df = pd.read_csv("C:\\Users\\Abdullah\\OneDrive\\Abdullah\\Coding\\Udemy\\Python\\DATAI Team\\1-Python\\7-Matplotlib\\data.csv")
df1 = df.drop(["Id"],axis=1)

#1
df1.plot()
plt.show()

#2
setosa = df[df.Species == "Iris-setosa"]
versicolor = df[df.Species == "Iris-versicolor"]
virginica = df[df.Species == "Iris-virginica"]

plt.plot(setosa.Id, setosa.PetalLengthCm, color="red", label="setosa")
plt.plot(versicolor.Id, versicolor.PetalLengthCm, color="green", label="versicolor")
plt.plot(virginica.Id, virginica.PetalLengthCm, color="blue", label="virginica")

plt.xlabel("Id")
plt.ylabel("PetalLengthCm")
plt.legend()
plt.show()

#3
df1.plot(grid=True, linestyle=":", alpha=0.5)
plt.show()
