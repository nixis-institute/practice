#def addition(a,b):
 #   c=a+b
  #  return c

#def another(a,b,c):
   # return a*b*c

#def summ(a,b=0):
    #return
#a=int(input("enter the value"))
#b=b+a   
def sumton(n):
    s=1
    for i in range(1,n+1):
        s=s*i
    return s
a = int(input("Enter the value "))



s=0
for i in range(1,a+1):
    s = s+sumton(i)

print(s)