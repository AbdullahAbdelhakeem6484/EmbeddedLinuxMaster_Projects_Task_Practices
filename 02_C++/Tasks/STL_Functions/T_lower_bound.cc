/*
The lower_bound function in C++ STL is used to find the position of the first element in a sorted range that is not less than a specified value. Here's a quick example:

*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 4, 4, 5, 7, 8, 9};

    // Sorting the vector (required for lower_bound)
    std::sort(vec.begin(), vec.end());

    int target = 3;

    // Finding the lower bound for the target value
    std::vector<int>::iterator it = std::lower_bound(vec.begin(), vec.end(), target);

    // Displaying the result
    if (it != vec.end()) {
        std::cout << "The lower bound for " << target << " is at position: " << (it - vec.begin()) << std::endl;
    } else {
        std::cout << "All elements are less than " << target << std::endl;
    }

    return 0;
}
