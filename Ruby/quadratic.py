a=float(input("enter a"))
b=float(input("enter b"))
c=float(input("enter c"))
d=b*b-4*a*c
D=d**0.5
r1=-b-D/(2*a)
r2=-b+D/(2*a)
if(d==0):
    print("equal roots",r1,r2)
elif(d>0):
    print("real roots",r1,r2)
elif(d<0):
    print("no real roots")
else:
    print("error")
       
