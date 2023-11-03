/*
 the std::sort function allows you to specify a custom sorting criterion using a lambda function. 

*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::pair<int, int>> vec = {{1, 3}, {2, 1}, {4, 5}, {3, 2}};

    // Sorting the vector based on the second element of each pair using a lambda function
    std::sort(vec.begin(), vec.end(), [](const auto & a , const auto & b){return a.second < b.second;});

    // Displaying the sorted vector
    std::cout << "Sorted vector based on the second element of each pair:" << std::endl;
    for (const auto& p : vec) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}


