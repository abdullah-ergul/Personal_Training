def count_substring(string, sub_string):
    list_1= list(string)
    sub_list= list(sub_string)
    num= 0
    b= True
    for i in range(len(string)-len(sub_string)+1):
        b= True
        for j in range(len(sub_string)):
            try:
                if list_1[i+j] != sub_list[j]:
                    b= False
            except:
                continue
        if b == True:
            num += 1
    return num

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)