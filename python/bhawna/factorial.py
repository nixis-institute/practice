def factorial (a):
    c=1
    for i in range (1,a+1):
        c=c*i
    return c 

def sum (b):
    c=0
    for i in range (1,b+1):
        c=c+i
    return c

def sumoffactorial(value):
    sum=0
    for i in range(value):
        sum=sum+factorial(i)
    return sum    