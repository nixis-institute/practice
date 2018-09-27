f=open("abc.txt","w")
a=int(input("enter the value :-"))
for i in range(1,11):
    f.write("{} x {} = {}".format(a,i,a*i)+"\n")
    
    #f.write(str(a)+" X "+str(i)+" = "+str(a*i)+"\n")
f.close()    
