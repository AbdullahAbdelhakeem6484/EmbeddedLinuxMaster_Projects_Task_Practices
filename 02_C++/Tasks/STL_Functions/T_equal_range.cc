/*
The equal_range function in C++ STL is used to find the range of elements that are equivalent to a specified value in a sorted range. It returns a pair of iterators representing the range of elements.

*/


#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 4, 4, 4, 5, 7, 4, 9};

    // Sorting the vector
    std::sort(vec.begin(), vec.end());

    // Finding the equal range of 4 in the sorted vector
    int value = 4;
    auto range = std::equal_range(vec.begin(), vec.end(), value);

    // Displaying the result
    if (range.first != range.second) {
        std::cout << "Equal range for " << value << " is from position: " << std::distance(vec.begin(), range.first);
        std::cout << " to position: " << std::distance(vec.begin(), range.second - 1) << std::endl;
    } else {
        std::cout << "No element equal to " << value << " found in the vector." << std::endl;
    }

    return 0;
}
