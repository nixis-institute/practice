def factorial(a):
    c=1
    for i in range(1,a+1):
        c=c*i    
    return c

a=int(input("enter the value"))
f=factorial(a)
print("factorial is",f)