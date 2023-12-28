from time import sleep
import os
import RPi.GPIO as GPIO

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM) #or GPIO.BOARD
GPIO.setup(21 , GPIO.OUT)

#os.system("gpio -g mode 2 out")

while True:
    x = input("Please enter on or off ")
    if x == "ON" or x == "on":
        GPIO.output(21 , GPIO.HIGH)
        # os.system("gpio -g write 2 1")
    else:
        GPIO.output(21 , GPIO.LOW)
        # os.system("gpio -g write 2 0")