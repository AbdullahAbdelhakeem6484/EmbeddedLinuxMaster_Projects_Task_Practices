/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 16, 2023
* Description: use boolalpha ,setw,  setprecision, scientific , hex , oxt, dec
*
* Type: Practice
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: ex.boolean
* Outputs: true | false
*
* Algorithm:
*   1. take input from user
*   2. aplly some features on it
*
* Note:
*******************************************************/
#include <ios>
#include<iostream>
#include<iomanip>
int main(){
    bool b;
    std::cout << "Enter a bools(0 or 1): ";
    std::cin >> b;
    std::cout << "bool: value is "<< std::boolalpha << b << std::endl;
    int num2 =42;
    std::cout << "Number: "<< std::setw(6) << num2 << std::endl;
    double pi = 3.14159265359879323846;
    std::cout << "Pi: "<< std::setprecision(2) << pi << std::endl;
    double num3 =123.456789;
    std::cout << "Number: "<< std::scientific << num3 << std::endl;
    int num =42;
    std::cout << "Hex: "<< std::hex << num << std::endl;
    std::cout << "oct: "<< std::oct << num << std::endl;
    std::cout << "dec: "<< std::dec << num << std::endl;

    return 0;
}