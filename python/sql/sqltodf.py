import sqlite3 as sq
import pandas as pd

data = sq.connect("abc.db")
#df = pd.DataFrame()

# pd.read_sql("command of sql",name of database)

df = pd.read_sql("select * from student where name='Ajay'",data)
print(df)