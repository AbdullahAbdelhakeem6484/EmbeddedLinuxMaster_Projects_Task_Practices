# /*******************************************************
# * Author: Abdullah Abdelhakeem
# * Date: October 7, 2023
# * Description: Write a python program to count the number 4 in a given list
# *
# * Type: Task
# * Language: Python
# * Dependencies: None
# * IDE: VS Code
# * Compiler: interpreter
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
def count_digit_occurance(ls , digit):
    count =0
    for i in ls:
        for c in str(i):
            if c == str(digit):
                count +=1
    return count

def main():
    ls = [14,24,40,45,124,3444]
    digit_to_count = 4
    occurance = count_digit_occurance(ls , digit_to_count)
    print(f"the digit {digit_to_count} appears {occurance} times in the list ")

main()