/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 16, 2023
* Description: Memory Section
*
* Type: Practice
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: Variable
* Outputs: Check the Section by Objdumb
*
* Algorithm:
*   1. Check Memory Section
*
* Note: No Comment
*******************************************************/
#include<string>
#include<iostream>
int This_x_Data_Section;
int This_x_Bss = 10;
int main(){
    int This_x_Stack = 0;
    std::cout << "Hello World " << This_x_Stack << std::endl;

    return 0;
}