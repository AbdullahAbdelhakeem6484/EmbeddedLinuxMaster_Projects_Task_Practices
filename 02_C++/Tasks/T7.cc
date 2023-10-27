/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 23, 2023
* Description: Change from decimal to binary and vice versa use bitset
*
* Type: Task
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: Decimal | Binary
* Outputs: Change from decimal to binary and vice versa use bitset
*
* Algorithm:
*   1.
*
* Note:
*******************************************************/

#include <iostream>
#include <bitset>

std::string decimalToBinary(int decimalNumber) {
    // Convert decimal to binary
    std::bitset<8> binaryBits(decimalNumber);
    return binaryBits.to_string();
}

int binaryToDecimal(const std::string& binaryString) {
    // Convert binary to decimal
    std::bitset<8> binaryBits(binaryString);
    return static_cast<int>(binaryBits.to_ulong());
}

int main() {
    int choice;

    do {
        std::cout << "Choose an option:\n";
        std::cout << "1. Decimal to Binary\n";
        std::cout << "2. Binary to Decimal\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int decimalNumber;
                std::cout << "Enter a decimal number: ";
                std::cin >> decimalNumber;

                std::string binaryRepresentation = decimalToBinary(decimalNumber);
                std::cout << "Binary representation: " << binaryRepresentation << "\n";
                break;
            }
            case 2: {
                std::string binaryString;
                std::cout << "Enter a binary number: ";
                std::cin >> binaryString;

                int decimalRepresentation = binaryToDecimal(binaryString);
                std::cout << "Decimal representation: " << decimalRepresentation << "\n";
                break;
            }
            case 0:
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}
