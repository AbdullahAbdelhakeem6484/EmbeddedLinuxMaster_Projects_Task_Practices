# /*******************************************************
# * Author: Abdullah Abdelhakeem
# * Date: October 7, 2023
# * Description: Write a python program to test whether a passed letter is a vowel or not
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

def isVowel(letter):
    letter = letter.lower()
    if letter in ['a','e','i','o','u']:
        return True
    else:
        return False

def main():
    letter_to_test = input("Enter a letter: ")
    if len(letter_to_test)==1:
        if isVowel(letter_to_test):
            print(f"the letter '{letter_to_test}' is a vowel")
        else:
            print(f"the letter '{letter_to_test}' is not a vowel")
    else:
        print("please enter a single character")

main()

