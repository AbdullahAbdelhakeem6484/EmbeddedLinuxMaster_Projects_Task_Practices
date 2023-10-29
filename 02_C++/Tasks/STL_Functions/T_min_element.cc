/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: October 27, 2023
* Description: Test all functions of STL
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
* Note: https://hackingcpp.com/cpp/cheat_sheets.html#hfold0a
*******************************************************/
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v = {5, 2, 9, 1, 5, 6};

    // Use std::min_element with std::begin and std::end
    auto min_it = std::min_element(std::begin(v), std::end(v));

    // Check if the vector is not empty before dereferencing the iterator
    if (min_it != std::end(v)) {
        std::cout << "Minimum element: " << *min_it << std::endl;
    } else {
        std::cout << "Vector is empty." << std::endl;
    }

    return 0;
}
