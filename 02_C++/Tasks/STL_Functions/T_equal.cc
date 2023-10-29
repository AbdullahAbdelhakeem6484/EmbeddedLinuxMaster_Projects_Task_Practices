#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers1 = {10, 20, 30, 40, 50};
    std::vector<int> numbers2 = {10, 20, 30, 40, 50};

    bool areEqual = std::equal(numbers1.begin(), numbers1.end(), numbers2.begin());

    if (areEqual) {
        std::cout << "The two vectors are equal." << std::endl;
    } else {
        std::cout << "The two vectors are not equal." << std::endl;
    }

    return 0;
}
