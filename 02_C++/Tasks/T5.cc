/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 23, 2023
* Description: Multiplication Table
*
* Type: Task
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: N
* Outputs: Multiplication Table (1 X N ) , (2 X N), . . .etc.
*
* Algorithm:
*   1.
*
* Note:
*******************************************************/
// #include<iostream>
// #include<iomanip>
// int main(){
//     int n ;
//     std::cout << "Enter the Number for Multiplication Table: ";
//     std::cin >> n;
//     for(int i = 1 ; i<= 12 ; i++)
//         std::cout <<std::setw(2)<< i <<std::setw(2) <<"X" <<std::setw(2)<< n <<std::setw(2)<< "=" <<std::setw(2)<<  i*n <<std::setw(5)<< std::endl;
//     return 0;
// }

/******************************************/


#include <iostream>
#include <iomanip>

void displayMultiplicationTable(int range) {
    // Print the header
    std::cout << "Multiplication Table up to " << range << ":\n\n";
    std::cout << "  |";
    for (int i = 1; i <= range; ++i) {
        std::cout << std::setw(4) << i;
    }
    std::cout << "\n";

    // Print a separator line
    for (int i = 0; i <= range * 5; ++i) {
        std::cout << "-";
    }
    std::cout << "\n";

    // Calculate and display the table
    for (int i = 1; i <= range; ++i) {
        std::cout << std::setw(2) << i << "|";
        for (int j = 1; j <= range; ++j) {
            std::cout << std::setw(4) << i * j;
        }
        std::cout << "\n";
    }
}

int main() {
    int range;

    std::cout << "Enter the range for the multiplication table: ";
    std::cin >> range;

    // Display the multiplication table
    displayMultiplicationTable(range);

    return 0;
}
