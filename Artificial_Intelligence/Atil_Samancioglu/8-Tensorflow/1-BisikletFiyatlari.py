import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sbn
import tensorflow as tf



dataFrame = pd.read_excel("C:\\Users\\Abdullah\\OneDrive\\Abdullah\\Coding\\BTK_Akademi\\Python\\Veri_Bilimi_Icin_Python_ve_Tensorflow\\8_Tensorflow\\bisiklet_fiyatlari.xlsx")

# y -> label
y = dataFrame["Fiyat"].values

# x -> feature
x = dataFrame[["BisikletOzellik1","BisikletOzellik2"]].values


from sklearn.model_selection import train_test_split
x_train, x_test, y_train, y_test = train_test_split(x,y,test_size=0.33,random_state=15)

from sklearn.preprocessing import MinMaxScaler
scaler = MinMaxScaler()
scaler.fit(x_train)
# Veriler 0-1 arasına getirildi

x_train = scaler.transform(x_train)
x_test = scaler.transform(x_test)


from keras.models import Sequential
from keras.layers import Dense

model = Sequential()
# Hidden Layer
model.add(Dense(4,activation="relu"))
model.add(Dense(4,activation="relu"))
model.add(Dense(4,activation="relu"))
# Output
model.add(Dense(1))

model.compile(optimizer="rmsprop",loss="mse")

model.fit(x_train, y_train, epochs=250)

loss = model.history.history["loss"]

sbn.lineplot(x=range(len(loss)), y=loss)
plt.title("Loss")
plt.show()

trainLoss = model.evaluate(x_train, y_train, verbose=0)
testLoss = model.evaluate(x_test, y_test, verbose=0)
print("\nTrain Loss: ", trainLoss, "  Test Loss: ", testLoss, end="\n\n")

testTahminleri = model.predict(x_test)

tahminDf = pd.DataFrame(y_test, columns=["Gercek Y"])
testTahminleri = pd.Series(testTahminleri.reshape(330,))

tahminDf = pd.concat([tahminDf, testTahminleri], axis=1)
tahminDf.columns = ["Gercek Y", "Tahmin Y"]

sbn.scatterplot(x="Gercek Y", y="Tahmin Y", data= tahminDf)
plt.show()

from sklearn.metrics import mean_absolute_error, mean_squared_error
meanAbsolute = mean_absolute_error(tahminDf["Gercek Y"], tahminDf["Tahmin Y"])
meanSquared = mean_squared_error(tahminDf["Gercek Y"], tahminDf["Tahmin Y"])
print("\nMean Absolute: ", meanAbsolute, "  Mean Squared: ", meanSquared, end="\n\n")

yeniBisikletOZellikleri = [[1760, 1758]]
yeniBisikletOZellikleri = scaler.transform(yeniBisikletOZellikleri)

from keras.models import load_model
model.save("bisiklet_modeli.h5")

sonradanCagirilanModel = load_model("bisiklet_moelin.h5")
