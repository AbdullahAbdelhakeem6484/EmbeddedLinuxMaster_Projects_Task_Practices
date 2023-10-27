/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 29, 2023
* Description: Find the even and odd numbers in the array
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
#include<iostream>
#include<vector>

void EvenOdd(std::vector<int>& arr ,std::vector<int>& Even , std::vector<int>& Odd )
{
    for(const int & x: arr ){
        if(x%2 ==0)
        {
            Even.push_back(x);
        }
        else{
            Odd.push_back(x);
        }
    }
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> evenNumbers;
    std::vector<int> oddNumbers;

    // Separate even and odd numbers
    EvenOdd(arr, evenNumbers, oddNumbers);

    std::cout << "Even numbers: ";
    for (const int& num : evenNumbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    std::cout << "Odd numbers: ";
    for (const int& num : oddNumbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}