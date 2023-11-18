import pandas as pd



dictionary= {"NAME":["ali","veli","kenan","hilal","ayse","evren"],
             "AGE":[15,16,17,33,45,66],
             "WAGE":[100,150,240,350,110,220]}

dataFrame1= pd.DataFrame(dictionary)

# Create newFeature column
dataFrame1["newFeature"]= [-1, -2, -3, -4, -5, -6]  # Create a new feature to dataFrame1

# Create Wage_Level column
mean_WAGE = dataFrame1.WAGE.mean()
dataFrame1["Wage_Level"] = ["low" if mean_WAGE > each else "high" for each in dataFrame1.WAGE]

print(dataFrame1.loc[:], "\n")

# dataFrame1= dataFrame1.drop(["newFeature"], axis= 1)
dataFrame1.drop(["newFeature"], axis= 1, inplace= True)  # Delete a column

print(dataFrame1.loc[:], "\n")

# * ---------------------------------

# vertical
data1 = dataFrame1.head()
data2 = dataFrame1.tail()
data_v_concat = pd.concat([data1, data2], axis= 0)
print(data_v_concat.loc[:], "\n")

# horizontal
wage = dataFrame1.WAGE
age = dataFrame1.AGE
data_h_concat = pd.concat([wage, age], axis= 1)
print(data_h_concat.loc[:], "\n")
