def prime(value):
    for i in range(2,value):
        if(value%i==0):
            return False
    return True


for i in range(3,30):
    if(prime(i)):
        print("{} is prime ".format(i))