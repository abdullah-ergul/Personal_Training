import pandas as pd



df = pd.read_csv("C:\\Users\\Abdullah\\OneDrive\\Abdullah\\Coding\\Udemy\\Python\\DATAI Team\\1-Python\\7-Matplotlib\\data.csv")

print(df.columns,"\n\n")
print(df.Species.unique(),"\n\n")
print(df.info(),"\n\n")
print(df.describe(),"\n\n")

setosa = df[df.Species == "Iris-setosa"]
versicolor = df[df.Species == "Iris-versicolor"]

print(setosa.describe())
print(versicolor.describe())
