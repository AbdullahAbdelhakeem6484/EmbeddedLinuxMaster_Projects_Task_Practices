/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 15, 2023
* Description: Use Vector
*
* Type: Practice
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: Take a lot of Elements and put it in Vector
* Outputs: Print the Size of Vectors
*
* Algorithm:
*   1. Take the input from user.
*   2. push the input into Vector
*   3. Calculate the Size
*   4. Print the Size of Vector.
*
* Note: No Comment
*******************************************************/
#include<iostream>
#include<vector>

int main()
{
    std::vector<int> myVcetor;
    int myint;
    std::cout << "Please Enter some integers (enter 0 to end): ";
    do{std::cin >> myint;
    myVcetor.push_back(myint);
    }while(myint);
    std::cout <<"myvector stores " << int(myVcetor.size()) << " numbers. \n";
    return 0;
}