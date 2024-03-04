import mysql.connector

connection = mysql.connector.connect(
	host = 'localhost',
	port = '3306',
	user = 'root',
	password = '20020525'
	)
cursor = connection.cursor()

cursor.execute("show databases;")

records = cursor.fetchall()
for r in records:
	print(r)

cursor.close()
connection.close()