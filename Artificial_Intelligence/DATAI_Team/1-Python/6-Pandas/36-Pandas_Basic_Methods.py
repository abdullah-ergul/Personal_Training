import pandas as pd



dictionary= {"NAME":["ali","veli","kenan","hilal","ayse","evren"],
             "AGE":[15,16,17,33,45,66],
             "WAGE":[100,150,240,350,110,220]}

dataFrame1= pd.DataFrame(dictionary)

x= 3
head= dataFrame1.head(x)  # Get first x variable
tail= dataFrame1.tail(x)  # Get last x variable

print(dataFrame1.columns, "\n")
print(dataFrame1.info(), "\n")
print(dataFrame1.dtypes, "\n")
print(dataFrame1.describe(), "\n")  # numeric featue (columns -[AGE , WAGE]- )
