/*
The upper_bound function in C++ STL is used to find the position of the first element in a sorted range that is greater than a specified value. It's often used with sorted containers like vectors or arrays

*/
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 4, 4, 5, 7, 8, 9};

    // Sorting the vector
    std::sort(vec.begin(), vec.end());

    // Finding the upper bound of 6 in the sorted vector
    int value = 6;
    auto upper = std::upper_bound(vec.begin(), vec.end(), value);

    // Displaying the result
    if (upper != vec.end()) {
        std::cout << "First element greater than " << value << " is at position: " << std::distance(vec.begin(), upper) << std::endl;
    } else {
        std::cout << "No element greater than " << value << " found in the vector." << std::endl;
    }

    return 0;
}
