import sqlite3 as sq
import pandas as pd
con= sq.connect("new.db")
command="select * from stud"
df =pd.read_sql(command,con)
print(df)