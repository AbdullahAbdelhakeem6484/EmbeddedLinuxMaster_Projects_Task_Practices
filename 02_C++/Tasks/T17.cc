/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 29, 2023
* Description: Write String class which has Members {length - string}
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

class MyString{
    private:
        int length;
        char* str;
    public:
        MyString() = delete;
        MyString(const char *s){
            length =0;
            while(s[length] !='\0')
            {
                ++length;
            }
            str = new char[length + 1];
            for(int i=0  ; i<length ;i++)
            {
                str[i]= s[i];
            }
            str[length]='\0';
        }

        ~MyString() {
            delete[] str;
        }

        const char* getString() const {
            return str;
        }

        // Getter for the length
        int getLength() const {
            return length;
        }
};
int main() {
    MyString myString("Hello, World!");

    std::cout << "String: " << myString.getString() << std::endl;
    std::cout << "Length: " << myString.getLength() << std::endl;

    return 0;
}