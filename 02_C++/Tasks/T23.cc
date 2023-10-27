/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 30, 2023
* Description:
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
*    The "Rule of Five" includes:
*
*    01-Destructor
*    02-Copy Constructor
*    03-Copy Assignment Operator
*    04-Move Constructor
*    05-Move Assignment Operator
*******************************************************/
#include <iostream>
#include <cstring>

class CustomString {
private:
    char* str;

public:
    // Constructors
    CustomString() : str(nullptr) {}

    CustomString(const char* initialStr) {
        if (initialStr) {
            str = new char[strlen(initialStr) + 1];
            copy(initialStr);
        } else {
            str = nullptr;
        }
    }

    // Destructor
    ~CustomString() {
        delete[] str;
    }

    // Copy constructor
    CustomString(const CustomString& other) {
        str = new char[strlen(other.str) + 1];
        copy(other.str);
    }

    // Assignment operator
    CustomString& operator=(const CustomString& other) {
       if(this == &other)
       {
            return *this;
       }

       delete[] str;

       str = new char[strlen(other.str)+1];
       copy(other.str);
       return *this;
    }

     // Move constructor
    CustomString( CustomString&& other) noexcept{
        this->str = other.str;
        other.str = nullptr;
    }

    // Assignment operator
    CustomString& operator=( CustomString&& other) {
       if(this == &other)
       {
            return *this;
       }

        delete[] str;

        this->str = other.str;
        other.str = nullptr;
        return *this;
    }

    // Custom copy function using a loop
    void copy(const char* source) {
        if (source == nullptr) {
            return;
        }

        int length = strlen(source);
        str = new char[length + 1];

        for (int i = 0; i < length; ++i) {
            str[i] = source[i];
        }

        str[length] = '\0';
    }

    // Getter for the string
    const char* c_str() const {
        return str;
    }
};

int main() {
    CustomString source("Hello, World!");
    std::cout << "String: " << source.c_str() << std::endl;

    // Create a copy using the copy constructor
    CustomString copiedString(source);
    std::cout << "Copied String: " << copiedString.c_str() << std::endl;

    // Assignment
    CustomString assignedString;
    assignedString = source;
    std::cout << "Assigned String: " << assignedString.c_str() << std::endl;

    // Move constructor
    CustomString destination(std::move(source));
    std::cout << "Destination after move: " << destination.c_str() << std::endl;

    // Move assignment operator
    assignedString = std::move(destination);
    std::cout << "Assigned String after move: " << assignedString.c_str() << std::endl;

    return 0;
}







/***********************************/

// #include <iostream>
// #include <cstring>

// class CustomString {
// private:
//     char* str;
//     static int instanceCount;

//     // Custom copy function using a loop
//     void copyString(const char* source) {
//         if (source == nullptr) {
//             str = nullptr;
//             return;
//         }

//         int length = strlen(source);
//         str = new char[length + 1];

//         for (int i = 0; i <= length; ++i) {
//             str[i] = source[i];
//         }

//         ++instanceCount;
//         std::cout << "Constructor called with \"" << source << "\". Total instances: " << instanceCount << std::endl;
//     }

// public:
//     // Constructors
//     CustomString() : str(nullptr) {
//         ++instanceCount;
//         std::cout << "Default Constructor called. Total instances: " << instanceCount << std::endl;
//     }

//     CustomString(const char* initialStr) {
//         copyString(initialStr);
//     }

//     // Copy constructor
//     CustomString(const CustomString& other) {
//         copyString(other.str);
//     }

//     // Copy assignment operator
//     CustomString& operator=(const CustomString& other) {
//         if (this == &other) {
//             return *this;
//         }

//         delete[] str;
//         copyString(other.str);

//         std::cout << "Copy Assignment Operator called. Total instances: " << instanceCount << std::endl;

//         return *this;
//     }

//     // Move constructor
//     CustomString(CustomString&& other) noexcept {
//         str = other.str;
//         other.str = nullptr;

//         ++instanceCount;
//         std::cout << "Move Constructor called. Total instances: " << instanceCount << std::endl;
//     }

//     // Move assignment operator
//     CustomString& operator=(CustomString&& other) noexcept {
//         if (this == &other) {
//             return *this;
//         }

//         delete[] str;

//         str = other.str;
//         other.str = nullptr;

//         std::cout << "Move Assignment Operator called. Total instances: " << instanceCount << std::endl;

//         return *this;
//     }

//     // Destructor
//     ~CustomString() {
//         delete[] str;
//         --instanceCount;
//         std::cout << "Destructor called. Total instances: " << instanceCount << std::endl;
//     }

//     // Getter for the string
//     const char* c_str() const {
//         return str;
//     }
// };

// int CustomString::instanceCount = 0;

// int main() {
//     std::cout << "Creating source...\n";
//     CustomString source("Hello, World!");

//     std::cout << "\nCreating destination using copy constructor...\n";
//     CustomString destination(source);

//     std::cout << "\nCreating assignedString using copy assignment operator...\n";
//     CustomString assignedString;
//     assignedString = source;

//     std::cout << "\nExiting main function...\n";

//     return 0;
// }
