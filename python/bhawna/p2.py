def sum(a):
    c=0
    for i in range (1,a+1):
        c=c+i
    return c

a=int(input("enter the value"))
s=sum(a)
print("sum is",s)