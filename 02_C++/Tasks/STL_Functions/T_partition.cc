/**
 * a partition operation is often associated with the partition algorithm, 
 * which is part of the <algorithm> header. This algorithm is used to rearrange
 *  the elements in a range in such a way that elements for which a specified 
 * condition holds come before the elements for which the condition does not 
 * hold. The relative order of the elements is preserved.
 * 
 * 
*/
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    // Example vector of integers
    std::vector<int> numbers = {1, 5, 3, 8, 2, 7, 6, 4};

    // Define a predicate (condition) for partitioning
    auto isEven = [](int x) { return x % 2 == 0; };

    // Use the partition algorithm to rearrange elements based on the condition
    auto partitionPoint = std::partition(numbers.begin(), numbers.end(), isEven);

    // Output the partitioned vector
    std::cout << "Partitioned vector: ";
    for (auto it = numbers.begin(); it != partitionPoint; ++it) {
        std::cout << *it << " ";
    }
    std::cout << "| ";
    for (auto it = partitionPoint; it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
