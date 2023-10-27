/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 15, 2023
* Description: Ostream
*
* Type: Practice
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: Get A Reference to the Standard output stream (cout)
* Outputs: print "Hello World!" to the output stream
*
* Algorithm:
*   1. Just Use Ostream
*
* Note: No Comment
*******************************************************/
#include<iostream>

int main()
{
    std::ostream & out {std::cout};
    out << "Hello World!" << std::endl;
    return 0;
}