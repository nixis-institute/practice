a=int(input("Enter the first value"))
b=int(input("Enter the second value"))
c=int(input("Enter the third value"))

if(a>b and a>c):
    print("a is greater")
elif(b>c and b>a):
    print("b is greater")
else:
    print("c is greater")