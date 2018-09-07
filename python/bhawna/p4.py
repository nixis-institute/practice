def interest(p,r,t):
    c=1
    c= (p*r*t)/100
    return c

p=float(input("enter the money in rupees"))
r=float(input("enter the rate of interest"))
t=float(input("enter the time"))
z=interest(p,r,t)
print("simple interest=",z)