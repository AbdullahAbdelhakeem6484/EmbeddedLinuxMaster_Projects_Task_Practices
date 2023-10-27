/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 23, 2023
* Description: Decide the letter is vowel or not
*
* Type: Task
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: Letter
* Outputs: Vowel or not
*
* Algorithm:
*   1.
*
* Note:
*******************************************************/
// #include <cctype>
// #include <ios>
// #include<iostream>
// bool is_vowel(char c)
// {
//     char cc = std::tolower(c);
//     if(cc=='a' || cc=='i' ||cc=='e' ||cc=='o' || cc=='u')
//     {
//         return true;
//     }
//     return false;
// }

// int main(){
//     char ch;
//     std::cout << " Enter the Character to Check the Vowel: ";
//     std::cin >> ch;
//     std::cout << std::boolalpha << is_vowel(ch);
//     return 0;
// }

/***********************************************************************/

#include <iostream>
#include <cctype>

bool isVowel(char c) {
    // Convert to lowercase for case insensitivity
    c = std::tolower(c);

    // Array of vowel characters
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    // Check if the character is a vowel
    for (char vowel : vowels) {
        if (c == vowel)
            return true;
    }

    return false;
}

int main() {
    char inputChar;

    std::cout << "Enter a character: ";
    std::cin >> inputChar;

    if (isVowel(inputChar)) {
        std::cout << inputChar << " is a vowel.\n";
    } else {
        std::cout << inputChar << " is not a vowel.\n";
    }

    return 0;
}