#include <iostream>
#include <algorithm>
#include <vector>
#include <random>  // Required for std::default_random_engine and std::random_device

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Use std::random_device to generate a seed for the random number engine
    std::random_device rd;

    // Use std::default_random_engine as the random number engine
    std::default_random_engine rng(rd());

    // Use std::shuffle to shuffle the elements in the vector
    std::shuffle(numbers.begin(), numbers.end(), rng);

    // Output the shuffled vector
    std::cout << "Shuffled vector: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
