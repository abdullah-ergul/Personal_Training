import pandas as pd



dictionary= {"NAME":["ali","veli","kenan","hilal","ayse","evren"],
             "AGE":[15,16,17,33,45,66],
             "WAGE":[100,150,240,350,110,220]}

dataFrame1= pd.DataFrame(dictionary)

print(dataFrame1["NAME"], "\n")  # Given parameter's column
print(dataFrame1.AGE, "\n")

dataFrame1["newFeature"]= [-1, -2, -3, -4, -5, -6]  # Create a new feature to dataFrame1
print(dataFrame1.newFeature, "\n")

print(dataFrame1.loc[:3, "AGE"], "\n")  # :3 = 0:3  --> [0,3] inclulisive 3
print(dataFrame1.loc[:3, ["AGE","NAME"]], "\n")  # elemanlar
print(dataFrame1.loc[:3, "NAME":"WAGE"], "\n")  # aralık
print(dataFrame1.loc[::-1], "\n")  # tersten

print(dataFrame1.iloc[:,0], "\n")  # 0. index's (NAME) parameters
