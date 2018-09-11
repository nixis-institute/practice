class calculation:
    def sum (self,a,b,c=0):
        d=a+b+c
        return(d)



a=int(input("enter the first value"))
b=int(input("enter the second value"))

c = calculation()

d=c.sum(a,b,90)
print("sum is",d)