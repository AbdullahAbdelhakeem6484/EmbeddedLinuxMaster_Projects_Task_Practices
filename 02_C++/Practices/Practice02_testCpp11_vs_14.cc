/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 15, 2023
* Description: Test constexpr keyword (C++ 14)
*
* Type: Practice
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: Compiled Code in C++ 14
* Outputs: it is Working - No Failed
*
* Algorithm:
*   1. Test Constexpr - it works fine in C++14 and Not working in C++ 11
*
* Note: No Comment
*******************************************************/
#include<iostream>
#include<sstream>
#include<iomanip>
#include<bits/stdc++.h>

constexpr int ADD(int x , int y)
{
    x++;
    return x+y;
}

int main(){
    ADD(1, 2);
    return 0;
}