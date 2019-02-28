x = int(input("Enter first side "))
y = int(input("Enter second side "))
z = int(input("Enter third side "))
en = 0
if(x+y>z):
    en+=1
if(x+z>y):
    en+=1
if(z+y>x):
    en = en +1


if(en is 3):
    print("can be created tringle")
else:
    print("can't be created tringle")    