import pandas as pd



dictionary= {"NAME":["ali","veli","kenan","hilal","ayse","evren"],
             "AGE":[15,16,17,33,45,66],
             "WAGE":[100,150,240,350,110,220]}

dataFrame1= pd.DataFrame(dictionary)


filiterWAGE= dataFrame1.WAGE > 200  # False False True True False True

filiteredData1= dataFrame1[filiterWAGE]
print(filiteredData1.loc[:], "\n")


filiterAGE= dataFrame1.AGE < 20  # True True True False False False

filiteredData2= dataFrame1[filiterWAGE & filiterAGE]
print(filiteredData2.loc[:], "\n")


print(dataFrame1[dataFrame1.AGE > 60], "\n")
