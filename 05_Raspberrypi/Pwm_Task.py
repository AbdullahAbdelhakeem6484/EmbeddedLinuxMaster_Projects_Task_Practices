import RPi.GPIO as GPIO
from time import sleep

ledpin = 12

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)
GPIO.setup(ledpin, GPIO.OUT)

PI_PWM = GPIO.PWM(ledpin , 1000)
PI_PWM.start(0)

while True:
    for duty in range(0,101,1):
        PI_PWM.ChangeDutyCycle(duty)
        sleep(0.01)
    sleep(0.5)

    for duty in range(100,-1,-1):
        PI_PWM.ChangeDutyCycle(duty)
        sleep(0.01)
    sleep(0.5)