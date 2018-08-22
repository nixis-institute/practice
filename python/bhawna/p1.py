def power(a,b):
    c=1
    for i in range(b):
        c=c*a
    
    return c



value=int(input("value"))
pow=int(input("power"))
z=power(value,pow)
print("no is ",z)
