/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 23, 2023
* Description: Summation the digits of integer entered by user
*
* Type: Task
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: Number
* Outputs: Summation the digits of integer entered by user
*
* Algorithm:
*   1.
*
* Note:
*******************************************************/
#include<iostream>
int main(){
    int number, sum=0 , rem;
    std::cout << "Enter the Integer Number : ";
    std::cin >> number;
    while(number != 0)
    {
        rem = number %10;
        sum += number%10;
        number /=10;
    }
    std::cout << sum;
    return 0;
}