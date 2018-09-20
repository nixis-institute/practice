def sum(a,b):
    c=a+b
    return c

def mul(a,b):
    c=a*b
    return c
def sub(a,b):
    c=a-b
    return c
def div(a,b):
    c=a/b
    return c    

x = int(input("Enter the First value :- "))
y = int(input("Enter The Second value :- "))
d = int(input("Decide what to do :- "))

if (d==1):
    e = sum(x,y)
    print("You Decieded to Add :- ",e)
elif (d==2):
    f = sub(x,y)
    print("You Decieded to Minus :- ",f)
elif (d==3):
    g = mul(x,y)
    print("You Decieded to Multiply :- ",g)
elif (d==4):
    h = div(x,y)
    print("You Decieded to Divide :- ",h)
else:
    print("Your decision is Wrong ")


