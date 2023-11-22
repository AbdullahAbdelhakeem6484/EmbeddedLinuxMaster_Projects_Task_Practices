#include<iostream>
#include<vector>
#include<algorithm>
// int main(){
//     std::vector<int> v{1,2,3,4};
//     std::for_each(v.begin(),v.end(),[](int i){std::cout << i << " "; });

//     return 0;
// }


// int main(){

//     int x=10;
//     int y =11;

//     [&x, y](){

//         x = 50;
//         std::cout << x << std::endl;
//         return x+y;
//     }();


//     return 0;
// }


/*
int main(){
    int temp {10};
    [temp](int x){

        std::cout << x+temp<< std::endl;
    }(5);

    return 0;
}
*/

/**
 * Capture all by referenece
 * [&](){};
 * 
 * Capture all by value
 * [=](){};
 * 
 * 
 *capture all by value except temp by refference
 *[=, &temp](){};
*/

auto fn = [](auto x , auto y) {
    return x+y;
};

int  main(int argc, char const *argv[])
{
    /* code */
    std::cout << typeid(fn(2,3)).name()<<std::endl;
    std::cout << typeid(fn(2,3.5F)).name()<<std::endl;
    std::cout << typeid(fn(2,3.5)).name()<<std::endl;
    return 0;
}
