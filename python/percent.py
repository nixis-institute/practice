a = float(input("enter price "))
if(a<=5000):
    d = a*(10/100)
    final = a-d;
    print("discount is {} and final price is {}".format(d,final))
else:    
    d = a*(15/100)
    final = a-d;
    print("discount is {} and final price is {}".format(d,final))