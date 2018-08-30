def isprime(n):
    for i in range(2,n):
        if(n%i==0):
            flag=1
            break
        else:
            flag=0

    if flag==1:
        return False
    else:
        return True


n = int(input("Enter the value "))
for i in range(3,n):
    if(isprime(i)):
        print(i)        