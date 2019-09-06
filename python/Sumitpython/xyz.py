l=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
even=0
odd=0
for i in range(len(l)):
    if(l[i]%2==0):
        even=even+l[i]
    else:
        odd=odd+l[i]
        sum=even-odd
print(sum)