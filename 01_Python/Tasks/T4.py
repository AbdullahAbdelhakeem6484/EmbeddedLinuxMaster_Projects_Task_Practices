# /*******************************************************
# * Author: Abdullah Abdelhakeem
# * Date: October 7, 2023
# * Description: Write a python program which accepts the radius of a circle from the user and compute the area
# *
# * Type: Task
# * Language: Python
# * Dependencies: None
# * IDE: VS Code
# * Compiler: Interpreter
# * OS: Windows 10
# *
# * Inputs:
# * Outputs:
# *
# * Algorithm:
# *   1.
# *
# * Note:
# *******************************************************/

import math
def calculate_circle_area(radius):
    area = math.pi * radius ** 2
    return area

def main():
    try:
        radius = float(input("Enter the radius of the circle . "))
    except ValueError:
        print("Please enter a valid number for the radius. ")
    else:
        if radius >=0:
            area = calculate_circle_area(radius)
            print(f"The area of the circle with radius {radius} is {area:0.2f}")
        else:
            print("Radius cannot be negative , please enter +ve number")

main()