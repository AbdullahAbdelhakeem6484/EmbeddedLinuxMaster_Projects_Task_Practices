/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 16, 2023
* Description: init local variable - must
*
* Type: Practice
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: init local variable
* Outputs: avoid garbage data
*
* Algorithm:
*   1. declare local variable and not init it
*   2. print the local variable
*   3. grabage value
*
* Note: Don't let compiler to initialize the local variable
*******************************************************/

#include<iostream>
int main(){
    int x;
    std::cout<< x << std::endl;
    return 0;
}