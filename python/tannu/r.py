f = open("abc.txt","r")
data = f.read()
l = data.split("\n")
s=0             
for i in l:
    s = s+int(i)
print(s)    