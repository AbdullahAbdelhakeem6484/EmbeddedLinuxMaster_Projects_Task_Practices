/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 15, 2023
* Description: auto keyword (C++ 14)
*
* Type: Practice
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: Test auto keyword with lambda Function
* Outputs: auto works with c++14 not c++11
*
* Algorithm:
*   1. Test auto with c++11 vs c++ 14 - it works fine in C++14 and Not working in C++ 11
*
* Note:
*       - Compile: g++ -o practice03 .\Practice03_testCppModerns.cpp
*       - objdump -h .\practice03.exe
*       - More Detailed: objdump -x -s .\practice03.exe
*******************************************************/
#include<iostream>
#include<sstream>
#include<iomanip>
#include<bits/stdc++.h>
auto createLambda14()
{
    return [](int x){
        return x*x;
    };
}
// int main()
// {
//     std::cout << createLambda14()(5) << "\n";
//     return 0;
// }

int main()
{
    auto square = createLambda14();
    std::cout << square(5) << "\n";
    return 0;
}