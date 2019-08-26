p=float(input("enter your price value"))
if(p%2==0):
    d=10/100*p
else:
    d=15/100*p
fp=p-d
print("your final price is",fp)
