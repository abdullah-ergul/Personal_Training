n = int(input())
arr = list(map(int, input().split()))
arr.sort()
max1= max2= arr[0]
    
for i in range(n):
    if arr[i] > max1:
        max2= max1
        max1= arr[i]
print(max2)