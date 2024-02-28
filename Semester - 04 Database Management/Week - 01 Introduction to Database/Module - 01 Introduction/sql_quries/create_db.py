import mysql.connector
myConnection = mysql.connector.connect(
        host = "localhost",
        user = "root",
        passwd = "password"
    )
print(myConnection)

db_name = "database_name"
mycursor = myConnection.cursor()

sqlQuery = "CREATE DATABASE "+ db_name

mycursor.execute(sqlQuery)