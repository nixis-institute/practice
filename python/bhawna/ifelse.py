amount=int(input("enter the amount"))
if amount>=15000:
    d=amount*(15/100)
    f=amount-d
    #print("discount is 15%",d,f)
    print("discount is {} and final price is {}".format(d,f))
else:
    d=amount*(10/100)
    f=amount-d
    # print("discount is 10%",d,f)
    print("discount is {} and final price is {}".format(d,f))
   
