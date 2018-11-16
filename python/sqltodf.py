import sqlite3 as sq
import pandas as pd
con = sq.connect("abc.db")
query = "select * from student"
#query1 = "select * from student where marks>80"
#query1 = "select * from student where name<>'aman'"
df = pd.read_sql(query,con)
print(df)