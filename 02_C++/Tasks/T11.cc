/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 22, 2023
* Description: Merge two arrays together
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
void mergeArrays(int arr1[], int size1,int arr2[], int size2,int mergeArr[])
{
    int index=0;
    for(int i=0;i<size1;i++)
    {
        mergeArr[index] = arr1[i];
        index++;
    }
        for(int i=0;i<size2;i++)
    {
        mergeArr[index] = arr2[i];
        index++;
    }
}
int main() {
    int arr1[] = {1, 2, 3};
    int size1 = 3;

    int arr2[] = {4, 5, 6};
    int size2 = 3;

    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];

    // Merge the two arrays
    mergeArrays(arr1, size1, arr2, size2, mergedArr);

    std::cout << "Merged array: ";
    for (int i = 0; i < mergedSize; i++) {
        std::cout << mergedArr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}