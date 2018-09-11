def subtraction(a,b):
    f=a-b
    return f
def addition(a,b):
    d=a+b
    return d
def multiplication(a,b):
    e=a*b
    return e

a=int(input("enter the first value"))
b=int(input("enter the second value"))
c=int(input("enter the user choice"))
if c==1:
    f=subtraction(a,b)
    print("subtraction",f)
elif c==2:
    d=addition(a,b)
    print("addition",d)
elif c==3:
    e=multiplication(a,b)
    print("multiplication",e)
else:
    print("value is not valid")

