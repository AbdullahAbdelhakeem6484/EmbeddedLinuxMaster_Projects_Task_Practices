#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 5, 15, 25};
    
    int evenCount = std::count_if(numbers.begin(), numbers.end(), [](int num) {
        return num % 2 == 0;
    });

    std::cout << "The vector contains " << evenCount << " even numbers." << std::endl;

    return 0;
}
