/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 22, 2023
* Description: Create a function to search to the number in the array which number is taken from user
*
* Type: Task
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: Search number
* Outputs: which number tken from user
*
* Algorithm:
*   1.
*
* Note:
*******************************************************/
#include <algorithm>
#include<iostream>

int searchNumber(const int arr[] , size_t n , int search)
{
    auto it =  std::find(arr,arr+n, search);
    if( it != arr+n)
    {
        return std::distance(arr , it);
    }
    return -1;
}
int main(){
    const int arr[] {1,2,3,7,8,9,10,20};
    int size =  sizeof(arr)/sizeof(arr[0]);
    int target;
    std::cout << "please enter target for Search \n";
    std::cin >> target;
    int x = searchNumber(arr, size, target);
    if(x != -1)
    {
        std:: cout << " Target " << target << " founded at index " << x<< std::endl;
    }
    else{
        std::cout << "Target not found";
    }
    return 0;
}