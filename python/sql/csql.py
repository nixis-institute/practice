import sqlite3 as sq
data = [['Ajay',1,98],['Arun',2,78],['anil',3,76]]
file = sq.connect("abc.db")
for i in data:
    command = "insert into student values('"+i[0]+"',"+str(i[1])+","+str(i[2])+")"
    file.execute(command)
file.commit()
file.close()
print("sucess!")    