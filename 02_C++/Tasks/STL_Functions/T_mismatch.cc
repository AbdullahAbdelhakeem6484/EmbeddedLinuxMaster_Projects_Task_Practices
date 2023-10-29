#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers1 = {10, 20, 30, 40, 50};
    std::vector<int> numbers2 = {10, 22, 30, 45, 50};

    auto mismatchPair = std::mismatch(numbers1.begin(), numbers1.end(), numbers2.begin());

    if (mismatchPair.first != numbers1.end() && mismatchPair.second != numbers2.end()) {
        std::cout << "First mismatch found at position " << std::distance(numbers1.begin(), mismatchPair.first) << std::endl;
        std::cout << "Mismatched values: " << *mismatchPair.first << " and " << *mismatchPair.second << std::endl;
    } else {
        std::cout << "The two vectors are identical." << std::endl;
    }

    return 0;
}
