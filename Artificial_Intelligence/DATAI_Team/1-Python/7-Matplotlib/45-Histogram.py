import matplotlib.pyplot as plt
import pandas as pd


df = pd.read_csv("C:\\Users\\Abdullah\\OneDrive\\Abdullah\\Coding\\Udemy\\Python\\DATAI Team\\1-Python\\7-Matplotlib\\data.csv")

setosa = df[df.Species == "Iris-setosa"]
versicolor = df[df.Species == "Iris-versicolor"]
virginica = df[df.Species == "Iris-virginica"]

plt.hist(setosa.PetalLengthCm, bins=50)
plt.xlabel("PetalLengthCm values")
plt.ylabel("frekans")
plt.title("histogram")
plt.show()
