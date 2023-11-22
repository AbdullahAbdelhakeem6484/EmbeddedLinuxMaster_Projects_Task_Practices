#include <iostream>
#include <vector>
#include <algorithm>
class Complex{
    private:
        int real;
        float img;
    public:
        Complex() = default;
        Complex(int r , float i):real(r),img(i){}        
        void operator()(void){
            std::cout<< "Real is " << real << std::endl;
            std::cout<< "img is " << img << std::endl;
        }

};

void fun(std::function<void(void)> t){
    t();
}
int main(int argc, char const *argv[])
{
    Complex B(2,2.5);
    B();

    Complex();

    std::function<void(void)> t = Complex();
t();
    
    return 0;
}
