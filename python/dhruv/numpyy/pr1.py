import numpy as np
m=int(input("Enter size of element of array : "))
ar=np.array(np.arange(m),dtype='int32')
c=0
print(ar)
for i in range(2,m//2+1,1):
    if m//i==0:
        j=m//i
        
        x=ar.reshape(i,j)
        c=c+1
        print(x)
if c==0:
    print("ok")