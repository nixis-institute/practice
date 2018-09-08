a=int (input("Enter any number"))
flag=0
for i in range(2,a):
    if (a%i==0):
        flag=1
        break
if(flag==1):
    print("Number is not prime")
else:
    print("Number is prime")        