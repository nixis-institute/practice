import sqlite3 as sq
con=sq.connect("new.db") #this is used to create the new database or open the existing database
qury="create table stud(name char,roll_no int,marks float)"
con.execute(qury)
con.close()
