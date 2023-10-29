#include<iostream>
#include<vector>
#include<algorithm>
int main()
{


    std::
    vector<int> v {2,4,6};
    bool allEven = std::all_of(v.begin(),v.end(),[](int n){

        return n%2==0;
    });

    if (allEven) {
        std::cout << "All numbers in the vector are even." << std::endl;
    } else {
        std::cout << "Not all numbers in the vector are even." << std::endl;
    }

    return 0;
}