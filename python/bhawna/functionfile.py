def factorial(a):
    c=1
    for i in range (1,a+1):
        c=c*i
    return c

def sumoffactorial(value):
    sum=0
    for i in range(1,value+1):
        sum=sum+factorial(i)
        #sum=sum*i
    return sum
