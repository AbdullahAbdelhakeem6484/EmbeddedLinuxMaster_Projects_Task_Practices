/*
The nth_element function in C++ STL is used to partially sort a range so that the element at the nth position is the one that would be at that position in a sorted sequence.

*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 2, 8, 1, 7, 3, 6, 4};
                        // {2, 1, 3, 4, [7], 8, 6, 5};

    // Finding the 4th element using nth_element
    int n = 4;
    std::nth_element(vec.begin(), vec.begin() + n - 1, vec.end());

    // Displaying the result
    std::cout << "The " << n << "th element in the partially sorted vector is: " << vec[n - 1] << std::endl;

    // Displaying the partially sorted vector
    std::cout << "Partially sorted vector: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }

    return 0;
}
