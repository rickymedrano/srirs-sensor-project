#!/usr/bin/python3

import mysql.connector
import serial, sys, time
from mysql.connector import Error
time.sleep(300)
try:
    connection = mysql.connector.connect(host="DATABASE END GOES HERE", user="USER", passwd="MY_PASS", db="Your database name")
    if connection.is_connected():
       db_Info = connection.get_server_info()
       print("Connected to MySQL database to deliver POWER data... MySQL Server version on ",db_Info)
       cursor = connection.cursor()
except Error as e :
    print ("Error while connecting to MySQL", e)
finally:
	if(connection.is_connected()):
		arduinoWater = serial.Serial('/dev/ttyUSB0',9600,timeout=1)
		while 1:
			str = arduinoWater.readline()
			if len(str) > 0:
				now = time.time();
				sql = "INSERT INTO powertable (datetime,power) VALUES (%s,%s)"
				vals = (now, str)
				cursor.execute(sql, vals)
				connection.commit()
