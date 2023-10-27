/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 30, 2023
* Description: Fill array from 10 to 10000 sequentially
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
* Note: Iota Implementation
*       template<class ForwardIt, class T>
*       constexpr // since C++20
*       void iota(ForwardIt first, ForwardIt last, T value)
*       {
*           while (first != last)
*           {
*               *first++ = value;
*               ++value;
*          }
*       }
*******************************************************/
#include<iostream>
#include <numeric>
#include <vector>
int main(){
    int arraySize= 10000 - 10 + 1;
    std::vector<int> arr(arraySize);
    std::iota(arr.begin(), arr.end(), 10);
    std::cout << "First value: " << arr.front() << std::endl;
    std::cout << "Last value: " << arr.back() << std::endl;
    return 0;
}