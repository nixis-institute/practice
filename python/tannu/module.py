"""def add(d):
 return d;
"""

def sumofnumber(val):
    s=0
    for i in range(1,val+1):    
        s=s+i
    
    return s

a = int(input("Enter a value "))

print(sumofnumber(a)) 
#print(sumofnumber(30))   