/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 30, 2023
* Description: Calculate Accumulate of array
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
* Note: without static_cast<T>(0) , the init will be integer
*******************************************************/
#include<iostream>
#include <numeric>

template <typename T>
T calculateSum(const T *arr, int size)
{
    return std::accumulate(arr, arr+size , static_cast<T>(0));
}
int main() {
    const int arraySize = 10;
    int arrInt[arraySize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double arrDouble[arraySize] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};

    int sumInt = calculateSum(arrInt, arraySize);
    double sumDouble = calculateSum(arrDouble, arraySize);

    std::cout << "Sum of int array: " << sumInt << std::endl;
    std::cout << "Sum of double array: " << sumDouble << std::endl;

    return 0;
}