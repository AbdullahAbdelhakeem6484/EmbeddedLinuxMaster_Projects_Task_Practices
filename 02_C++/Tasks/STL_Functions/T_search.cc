/*The std::search algorithm is part of the C++ Standard Library and is used to search for a subsequence within a given range. It allows you to find the first occurrence of a sequence of elements within another sequence.*/
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> sequence = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> subsequence = {5, 6, 7};

    auto result = std::search(sequence.begin(), sequence.end(), subsequence.begin(), subsequence.end());

    if (result != sequence.end()) {
        std::cout << "Subsequence found starting at position " << std::distance(sequence.begin(), result) << std::endl;
    } else {
        std::cout << "Subsequence not found in the sequence." << std::endl;
    }

    return 0;
}
