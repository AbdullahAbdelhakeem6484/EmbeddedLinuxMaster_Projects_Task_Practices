/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 30, 2023
* Description: Return Reference of Static Variable from function
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
int& getStaticVarible()
{
    static int staticVariable=30;
    return staticVariable;
}
int main(){
    int &ref =getStaticVarible();
    std::cout << "Value of staticVariable: " << ref << std::endl;
    ref = 100;
    std::cout << "Updated value of staticVariable: " << getStaticVarible() << std::endl;

    return 0;
}