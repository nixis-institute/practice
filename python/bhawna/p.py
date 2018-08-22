def compare(a,b):
    if a>b:
        print("a is greater")
    elif a<b:
        print("b is greater")
    elif a==b:
        print("a is equal to b")
    else:
        print("not executed")

a=int(input("enter the first value"))
b=int(input("enter the second value"))


compare(a,b)
