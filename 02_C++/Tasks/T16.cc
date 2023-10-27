/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 29, 2023
* Description: Check if there is any value of array is even
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
#include <algorithm>
#include<iostream>
#include <vector>
int main(){
    std::vector<int> v{1,3,4};
    bool containsEven  = std::any_of(v.begin(), v.end(), [](int x){
        return x%2==0;
    } );

    if (containsEven) {
        std::cout << "The vector contains at least one even value." << std::endl;
    } else {
        std::cout << "The vector does not contain any even values." << std::endl;
    }

    return 0;
}