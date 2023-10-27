/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 23, 2023
* Description: Maximum number between three values
*
* Type: Task
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: 3 values
* Outputs: maximum
*
* Algorithm:
*   1.
*
* Note:
*******************************************************/


#include<iostream>
#include<algorithm>
int main(){
    int x,y,z;
    std::cout << "Plaese enter 3 Values : "; // ex 5  6  7
    std::cin >> x >> y >>z;
    std::cout << std::max({x,y,z});
    return 0;
}

// #include<iostream>
// #include<algorithm>
// #include<vector>
// int main(){
//     std::vector<int>v {1,2,3};
//     std::cout << *(std::max_element(v.begin(), v.end()));

//     return 0;
// }