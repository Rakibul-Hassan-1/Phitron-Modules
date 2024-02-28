import mysql.connector
myConnection = mysql.connector.connect(
        host = "localhost",
        user = "root",
        passwd = "password"
    )
print(myConnection)

db_name = "python_test_db"
mycursor = myConnection.cursor()

sqlQuery = "CREATE DATABASE "+ db_name
mycursor.execute(sqlQuery)