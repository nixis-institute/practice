import pandas as pd
dic={'name':['aman','suhel','dhruv','rahul','manish'],'class':['XI','XI','XI','XI','XI'],'roll no':[1,2,3,4,5,],'result':['pass','pass','pass','pass','pass',],'gender':['male','male','male','male','male',]}
df=pd.DataFrame(dic)

f = open("abc.csv","w",newline="")
s = df.to_csv(f)
print(s)
