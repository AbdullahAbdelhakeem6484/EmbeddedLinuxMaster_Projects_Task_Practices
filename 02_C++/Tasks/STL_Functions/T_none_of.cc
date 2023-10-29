#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 5, 15, 25};

    bool noneNegative = std::none_of(numbers.begin(), numbers.end(), [](int num) {
        return num < 0;
    });

    if (noneNegative) {
        std::cout << "None of the numbers in the vector are negative." << std::endl;
    } else {
        std::cout << "At least one number in the vector is negative." << std::endl;
    }

    return 0;
}
