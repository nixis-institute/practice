def fact(n):
    s=1;
    for i in range(1,n+1):
        s=s*i;
    return s; 

n = int(input("Enter a value "))
s=0;
for i in range(1,n+1):
    s=s + fact(i);
print(s)