import pandas as pd
import sqlite3 as sql
d={'Name':['Dhruv','Jai','Vijay','Veeru','sonu'],'Class':[11,11,11,11,11],'Rolll.No':[1,2,3,4,5]}
df=pd.DataFrame(d)
print(df)
con = sql.connect('abc.db')
df.to_sql('info',con,if_exists='replace')
print('DONE!')