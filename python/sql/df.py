import sqlite3 as sq
con=sq.connect('New1.db')
qury="create table yoyo(name char,roll_no int,class float)"
con.execute(qury)
con.close()
