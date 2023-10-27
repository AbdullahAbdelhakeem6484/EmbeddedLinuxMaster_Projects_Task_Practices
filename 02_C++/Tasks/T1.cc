/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 22, 2023
* Description: Create a table for Ascii code
*
* Type: Task
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: None | integer
* Outputs: Char - hex - oct - Decimal
*
* Algorithm:
*   1. Print The Ascii code 
*
* Note:
*******************************************************/
// #include <iostream>

// int main() {
//     std::cout << "ASCII Table" << std::endl;
//     std::cout << "---------------------------------------------" << std::endl;
//     std::cout << " Decimal  |  Octal  |  Hexadecimal  |  Character" << std::endl;
//     std::cout << "---------------------------------------------" << std::endl;

//     for (int i = 32; i < 127; ++i) {
//         std::cout << "    " << i << "     |   " << std::oct << i << "   |     " << std::hex << i << "        |    " << static_cast<char>(i) << std::endl;
//     }

//     return 0;
// }


/****************************************************************/

#include <iostream>
#include <iomanip>

int main() {
    std::cout << "ASCII Table" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << std::setw(10) << "Decimal" << std::setw(10) << "Octal" << std::setw(10) << "Hex" << std::setw(15) << "Character" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    for (int i = 0; i < 128; ++i) {
        if (i % 16 == 0)
            std::cout << std::endl;

        std::cout << std::setw(10) << i << std::setw(10) << std::oct << i << std::setw(10) << std::hex << i;
        std::cout << std::setw(15) << static_cast<char>(i) << std::dec << std::endl;
    }

    return 0;
}
