/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 23, 2023
* Description: Create a function to find the maximum number in the array
*
* Type: Task
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: Array of integers
* Outputs: max number
*
* Algorithm:
*   1.
*
* Note:
*******************************************************/
#include <algorithm>
#include<iostream>

int maxArry(int arr[] , size_t n )
{
 return *(std::max_element(arr, arr+n));
}

int main(){
    int ar[]{1,2,7,0,8};
    std::cout << maxArry(ar, sizeof(ar)/sizeof(ar[0]));
    return 0;
}