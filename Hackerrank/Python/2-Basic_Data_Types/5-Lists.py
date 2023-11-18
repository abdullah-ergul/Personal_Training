if __name__ == '__main__':
    N = int(input())
    ls = list()
    
    for i in range(N):
        inp = input().split()

        if(inp[0] == "insert"):
            ls.insert(int(inp[1]), int(inp[2]))
        elif(inp[0] == "print"):
            print(ls)
        elif(inp[0] == "remove"):
            ls.remove(int(inp[1]))
        elif(inp[0] == "append"):
            ls.append(int(inp[1]))
        elif(inp[0] == "sort"):
            ls.sort()
        elif(inp[0] == "pop"):
            ls.pop(-1)
        elif(inp[0] == "reverse"):
            ls.reverse()
