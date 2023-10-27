/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 29, 2023
* Description:Check if all the array is even?
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
    std::vector<int> v{2,4,6};
    bool allEven = std::all_of(v.begin(), v.end(), [](int x){
        return x%2==0;
    } );

    if (allEven) {
        std::cout << "All elements are even." << std::endl;
    } else {
        std::cout << "Not all elements are even." << std::endl;
    }
    return 0;
}