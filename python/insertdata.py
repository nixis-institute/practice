import sqlite3 as sql
import pandas as pd
con=sql.connect("new.db") # to open the database in which we have to insert the data
command="insert into stud values('Dhruv',10,99)" #stud is the name of the table
command1="insert into stud values('Raftaar',11,95)"
command2="insert into stud values('Muhfaad',10,99)"
command3="insert into stud values('Divine',10,99)"
con.execute(command)
con.execute(command1)
con.execute(command2)
con.execute(command3)
con.commit()