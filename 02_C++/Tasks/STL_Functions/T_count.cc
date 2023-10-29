#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 5, 15, 20};
    int target = 20;

    int occurrences = std::count(numbers.begin(), numbers.end(), target);

    std::cout << "The value " << target << " occurs " << occurrences << " times in the vector." << std::endl;

    return 0;
}
