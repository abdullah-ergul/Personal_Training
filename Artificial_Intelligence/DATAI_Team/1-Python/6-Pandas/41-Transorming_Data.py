import pandas as pd



dictionary= {"NAME":["ali","veli","kenan","hilal","ayse","evren"],
             "AGE":[15,16,17,33,45,66],
             "WAGE":[100,150,240,350,110,220]}

dataFrame1= pd.DataFrame(dictionary)

# * Create a new column and it gets age*2 parameter
dataFrame1["list_comp"] = [each*2 for each in dataFrame1.AGE]

# or

def multiply(age):
    return age*2
dataFrame1["apply_method"] = dataFrame1.age.apply(multiply)

print(dataFrame1.loc[:], "\n")
