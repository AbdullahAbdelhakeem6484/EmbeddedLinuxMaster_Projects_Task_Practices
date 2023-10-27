/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 16, 2023
* Description: Basic Data Types
*
* Type: Practice
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: Data Types
* Outputs: Print The Size of Data Types
*
* Algorithm:
*   1. print the Data Types
*
* Note:
*       01- The data type size and range depend a lot on the compiler.
*           However, the code that the compiler compiles is targeted for
*           some specific types of Microcontrollers or Microprocessors.
*
*        02- In simpler words, the size of any data type is directly
*           dependent on the compiler along with the target processor
*******************************************************/

#include<iostream>
int main()
{
    std::cout << "Size of char: "           << sizeof(char)         << " byte(s)\n";
    std::cout << "Size of short: "          << sizeof(short)        << " byte(s)\n";
    std::cout << "Size of int: "            << sizeof(int)          << " byte(s)\n";
    std::cout << "Size of long: "           << sizeof(long)         << " byte(s)\n";
    std::cout << "Size of long long: "      << sizeof(long long)    << " byte(s)\n";
    std::cout << "Size of float: "          << sizeof(float)        << " byte(s)\n";
    std::cout << "Size of double: "         << sizeof(double)       << " byte(s)\n";
    std::cout << "Size of long double: "    << sizeof(long double)  << " byte(s)\n";
    std::cout << "Size of bool: "           << sizeof(bool)         << " byte(s)\n";
    std::cout << "Size of string: "         << sizeof(std::string)  << " byte(s)\n";
    std::cout << "Size of int*: "           << sizeof(int*)         << " byte(s)\n";

    return 0;
}