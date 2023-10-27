# /*******************************************************
# * Author: Abdullah Abdelhakeem
# * Date: October 7, 2023
# * Description: Print the calender of a given month and year
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

import calendar

def print_calender(year , month):
    cal  = calendar.month(year, month)
    print(f"Calender for {calendar.month.__name__[month]} {year}:\n")
    print(cal)

def main():
    try:
        year = int(input("Enter the year: "))
        month = int(input("Enter the month (1-12): "))

        if 1<= month <= 12:
            print_calender(year , month)
        else:
            print("Invalid month, Please enter a number between 1 and 12. ")
    except ValueError:
        print("Invalid Input. Please eneter valid numeric values for year and month. ")

main()