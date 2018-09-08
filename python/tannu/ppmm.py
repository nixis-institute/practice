number=int(input("enter any value"))


def isprime(number):
    flag = 0
    for i in range(2,number):
        if number%i==0:
            flag = 1
            break
        else:
            flag = 0
    if(flag==0):
        return True
    else:
        return False



for i in range(3,number):
    if(isprime(i)):
print(i)