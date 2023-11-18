import matplotlib.pyplot as plt
import pandas as pd


df = pd.read_csv("C:\\Users\\Abdullah\\OneDrive\\Abdullah\\Coding\\Udemy\\Python\\DATAI Team\\1-Python\\7-Matplotlib\\data.csv")
df1 = df.drop(["Id"],axis=1)

#1
df1.plot(grid=True, alpha= 0.9, subplots=True)
plt.show()

#2
setosa = df[df.Species == "Iris-setosa"]
versicolor = df[df.Species == "Iris-versicolor"]
virginica = df[df.Species == "Iris-virginica"]

plt.subplot(2,1,1)
plt.plot(setosa.Id, setosa.PetalLengthCm, color="red", label="setosa")
plt.ylabel("setosa - PetalLengthCm")

plt.subplot(2,1,2)
plt.plot(versicolor.Id, versicolor.PetalLengthCm, color="green", label="versicolor")
plt.ylabel("versicolor - PetalLengthCm")
plt.show()
