# input         : [[1,'a',['cat'],2],[[[3]],'dog'],4,5]
# expect output : [1,'a','cat',2,3,'dog',4,5]

def flatten(flist):
    for llist in flist:
        if isinstance(llist, list):
            yield from flatten(llist)
        else:
            yield llist


f_list = [[1, 'a', ['cat'], 2], [[[3]], 'dog'], 4, 5]
print(list(flatten(f_list)))  # print " [1,'a','cat',2,3,'dog',4,5] "
