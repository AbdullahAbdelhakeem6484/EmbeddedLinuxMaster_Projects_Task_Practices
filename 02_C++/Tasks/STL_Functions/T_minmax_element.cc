#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 5, 15, 25};

    // Use std::minmax_element to find iterators pointing to the minimum and maximum elements
    auto result = std::minmax_element(numbers.begin(), numbers.end());

    if (result.first != numbers.end()) {
        std::cout << "Minimum value: " << *result.first << std::endl;
    }

    if (result.second != numbers.end()) {
        std::cout << "Maximum value: " << *result.second << std::endl;
    }

    return 0;
}
