/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 23, 2023
* Description: Delete number in array
*
* Type: Task
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: Array
* Outputs: Delete number in array
*
* Algorithm:
*   1.
*
* Note:
*******************************************************/
#include<iostream>
void shiftLeft(int arr[], int index, int size)
{
    for(int i=index ;i<size-1 ; i++)
    {
        arr[i] = arr[i+1];
    }
}
void deleteArry(int arr[],int& size, int numToRemove)
{
    int i =0;
    while(i<size)
    {
        if(arr[i] == numToRemove)
        {
            shiftLeft(arr, i, size);
            size--;
        }else{
            i++;
        }
    }
}



int main() {
    int arr[] = {1, 2, 3, 4, 5, 3};
    int size = 6;
    int numToRemove = 3;

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    deleteArry(arr, size, numToRemove);

    std::cout << "Array after removing " << numToRemove << ": ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}