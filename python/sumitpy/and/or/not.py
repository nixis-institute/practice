a=int(input("enter value :- "))
b=int(input("enter value :- "))
c=int(input("enter value :- "))
if(a==b or a==c):
    store=a+b
    print(store)
elif(b==a or b==c):
    store=a-b
    print(store)
elif(c==a or c==b):
    store=a*b
    print(store)
else:
    print("none of the condition is true")
