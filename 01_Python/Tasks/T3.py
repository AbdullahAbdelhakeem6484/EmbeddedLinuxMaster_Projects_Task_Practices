# /*******************************************************
# * Author: Abdullah Abdelhakeem
# * Date: October 7, 2023
# * Description: Write a python program to access environment variables
# *
# * Type: Task
# * Language: Python
# * Dependencies: None
# * IDE: VS Code
# * Compiler:Interpreter
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

import os
def access_evironment_variable(variable_name):
    if variable_name in os.environ:
        value = os.environ[variable_name].split(';')
        for path in value:
            print(path)
        # print(f"The Value of {variable_name} is : {value}")
    else:
        print(f"The environment variable {variable_name} is not set.")


def main():
    variable_name = "PATH"
    access_evironment_variable(variable_name)


main()