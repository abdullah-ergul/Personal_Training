# input          : [[1, 2], [3, 4], [5, 6, 7]]
# desired output : [[[7, 6, 5], [4, 3], [2, 1]]

f_list = [[1,2],[3,4],[5,6,7]]
f_list.reverse()

for i in f_list:
    i.reverse()

print(f_list)   # print [[7, 6, 5], [4, 3], [2, 1]]
