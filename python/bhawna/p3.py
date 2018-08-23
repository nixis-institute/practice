def square(a,b):
    c=a*a+2*a*b+b*b
    return c

a=int(input("enter the first value"))
b=int(input("enter the second value"))
c=square(a,b)
print("sum is",c)