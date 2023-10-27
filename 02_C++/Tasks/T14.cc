/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 29, 2023
* Description: Check if the Character is Digit?
*
* Type: Task
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs:
* Outputs:
*
* Algorithm:
*   1.
*
* Note:
*******************************************************/
#include <iostream>
#include <cctype>

int main() {
    // char ch = '7';
    char ch;
    std::cout << "eneter your chracter: ";
    std::cin >> ch;

    if (std::isdigit(ch)) {
        std::cout << "The character is a digit." << std::endl;
    } else {
        std::cout << "The character is not a digit." << std::endl;
    }

    return 0;
}
