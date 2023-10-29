#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 5, 15, 25};
    
    auto it = std::find_if(numbers.begin(), numbers.end(), [](int num) {
        return num > 20;
    });

    if (it != numbers.end()) {
        std::cout << "First number greater than 20 is " << *it << std::endl;
    } else {
        std::cout << "No number greater than 20 found in the vector." << std::endl;
    }

    return 0;
}
