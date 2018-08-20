def power (a,b):
    c=1
    for i in range (b):
        c=c*a
    return c



value=int(input("value"))
p=int(input("power"))

z=power(value,p)


print("no is",z)