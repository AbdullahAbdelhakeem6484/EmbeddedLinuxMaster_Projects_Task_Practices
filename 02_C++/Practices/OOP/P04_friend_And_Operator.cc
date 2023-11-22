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
        int operator +(int value){
            return this->real + value;
        }

        friend int operator +(int value, Complex c);
};
    
int operator +(int value, Complex c){
    return value + c.real;
}


int main(int argc, char const *argv[])
{
   Complex B (2,2.5);
   std::cout << B+5 << std::endl;
   std::cout << 10 +B<< std::endl;
    return 0;
}
