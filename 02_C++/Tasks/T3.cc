/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 23, 2023
* Description: Right Angle triangle
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
*                *
*                * *
*                * * *
*               * * * *
*               * * * * *
*******************************************************/
#include<iostream>
int main(){
    int row;
    std::cout <<"pleasen enter height of Traingle\n";
    std::cin >> row;
    for(int i=0; i<row-1;i++)
    {
        for(int j=0; j<(2*i+1) ; j++)
        {
            std::cout << "*" <<" " ;
        }
        std::cout << std::endl;
    }


    return 0;
}


/**************************************************/
// #include <iostream>

// int main() {
//     int Rows;

//     std::cout << "Enter the number of rows for the right-angled triangle: ";
//     std::cin >> Rows;

//     for (int i = 1; i <= Rows; ++i) {
//         for (int j = 0; j < i; ++j) {
//             std::cout << "*";
//         }

//         std::cout << "\n";
//     }

//     return 0;
// }
