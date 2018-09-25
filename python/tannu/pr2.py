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


n=int(input("Enter the value"))
s=0
for i in range(3,n):
    if(isprime(i)):
        s=s+i
        print("{} is prime".format(i))
print("Total sum is {}".format(s))        