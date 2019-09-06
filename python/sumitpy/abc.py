import mysql.connector as sqltor
mycon=sqltor.connect(host="localhost",user="root",password="nixis")
if mycon.is_connected():
    print("ok")
mycon.close()