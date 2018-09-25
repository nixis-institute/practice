n=int(input("Enter the Value"))
for i in range(2,n+1):
    if(n%i==0):
        print("The Number is not Prime")
        break
    else:
        print("The Number is Prime")
        break
