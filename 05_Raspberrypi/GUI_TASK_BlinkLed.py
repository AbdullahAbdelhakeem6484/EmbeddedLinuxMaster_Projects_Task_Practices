import tkinter as gui
import RPi.GPIO as GPIO

LED = 2

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM)      # Use BCM GPIO numbers
GPIO.setup(LED, GPIO.OUT)

x = 0

def LED_Toggle():
    global x
    x ^= 1
    GPIO.output(LED, x)

# main Window
main_window = gui.Tk()
main_window.title("LED TOGGLE")
main_window.geometry("400x200+500+300")
main_window.resizable(False, False)
main_window.configure(background="black")

# widget
buttontoggle = gui.Button(main_window, text="LED Toggle", command=LED_Toggle, bg="yellow")

# places
buttontoggle.place(x=50, y=50)

main_window.mainloop()
