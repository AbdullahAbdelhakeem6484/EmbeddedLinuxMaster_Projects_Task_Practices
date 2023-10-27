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
    int x=5;
    std::cout << "Value : " << x << std::endl;
    std::cout << "Value : " << x << "\n";
    printf("Value : %d\n", x);
    return 0;
}