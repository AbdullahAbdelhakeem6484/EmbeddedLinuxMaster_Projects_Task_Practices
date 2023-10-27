/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 29, 2023
* Description: Sort with Lambda: Use lambda function to sort an array of integers in Ascending or Descending
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
void sortArray(std::vector<int> & v, bool ascending)
{
    std::sort(v.begin(), v.end(), [ascending](int x , int y){
        return ascending? x<y: x>y;
    });
}



int main() {
    std::vector<int> arr = {5, 2, 8, 1, 3};
    sortArray(arr, true);

    std::cout << "Sorted in ascending order: ";
    for (const int& num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    sortArray(arr, false);

    std::cout << "Sorted in descending order: ";
    for (const int& num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}