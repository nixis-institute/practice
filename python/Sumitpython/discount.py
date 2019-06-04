amt=int(input("enter amt from 1000 to 10000"))
#amt=float
if(amt>=1000 and amt<=5000):        
    amt=amt-amt*10/100
elif(amt>=5100 and amt<=10000):
    amt=amt-amt*20/100
else:
    amt>10000
    amt=("amt is not apropriate")
print("This is your net amount",amt)