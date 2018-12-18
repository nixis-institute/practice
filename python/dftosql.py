import sqlite3 as sq
import pandas as pd
con = sq.connect("xyz.db")
d = {"name":["abc","xyz"],"address":["delhi","mumbai"]}
df = pd.DataFrame(d)

#DataFrame.to_sql("name_of_table","name_of_database_connection","if_exist")
df.to_sql("emp",con,if_exists="replace")