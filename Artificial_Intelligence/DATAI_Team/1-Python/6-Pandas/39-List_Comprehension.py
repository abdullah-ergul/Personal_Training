import pandas as pd



dictionary = {"NAME":["ali","veli","kenan","hilal","ayse","evren"],
              "AGE":[15,16,17,33,45,66],
              "WAGE":[100,150,240,350,110,220]}

dataFrame1 = pd.DataFrame(dictionary)

# Calculate mean with pandas
mean_WAGE = dataFrame1.WAGE.mean()


# Calculate mean with numpy
import numpy as np
mean_WAGE_np = np.mean(dataFrame1.WAGE)


# * --------------------------------------

#1
# for each in dataFrame1.WAGE:
#     if mean_WAGE > each:
#         print("low")  # ? for ex print()
#     else:
#         print("high")  # ? for ex print()

dataFrame1["Wage_Level"] = ["low" if mean_WAGE > each else "high" for each in dataFrame1.WAGE]

#2
dataFrame1.columns= [each.lower() for each in dataFrame1.columns]  # set all columns to lower case

# for each in dataFrame1.columns:
#     if len(each.split()) > 1:
#         each.split()[0]+"_"+each.split()[1]
#     else:
#         pass

dataFrame1.columns= [each.split()[0]+"_"+each.split()[1] if len(each.split()) > 1 else each for each in dataFrame1.columns]  # treverse all columns and if there any " " char, make it "_" char.
