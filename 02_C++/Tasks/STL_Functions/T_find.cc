#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 5, 15, 25,15};
    int target = 15;

    auto it = std::find(numbers.begin(), numbers.end(), target);

    if (it != numbers.end()) {
        std::cout << "Found " << target << " at position " << std::distance(numbers.begin(), it) << std::endl;
    } else {
        std::cout << target << " not found in the vector." << std::endl;
    }

    return 0;
}
