def root(a,b):
     c=a*a*a+b*b*b+3*a*a*b+3*a*b*b
     return c

a=int(input("enter first value"))
b=int(input("enter second value"))
c=root(a,b)
print("value is",c)