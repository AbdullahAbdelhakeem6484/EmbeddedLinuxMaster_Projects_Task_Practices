#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 5, 15, 25};

    bool hasEven = std::any_of(numbers.begin(), numbers.end(), [](int num) {
        return num % 2 == 0;
    });

    if (hasEven) {
        std::cout << "At least one even number found in the vector." << std::endl;
    } else {
        std::cout << "No even numbers found in the vector." << std::endl;
    }

    return 0;
}
