import sqlite3 as sq
import pandas as pd
con=sq.connect("new.db")
d = {"Name":['Dhruv','Vijay','Kapil'],"Marks":[98,34,80]}
df=pd.DataFrame(d)
df.to_sql("stud",con,if_exists="replace")


