#include <iostream>
#include <vector>
#include <algorithm>
class Complex{
    private:
        int real;
        float img;
    public:
        Complex() = default;
        Complex(int r , int i):real(r),img(i){}

        int operator+(int r){
            std::cout << "real " << std::endl;
            return this->real + r;
        } 
        
        int operator+(float i){
            std::cout << "img" << std::endl;
            return this->img + i;
        }
        
        Complex operator+(const Complex& temp){
            std::cout << "Complex"<< std::endl;
            Complex result;
            result.img = this->img + temp.img;
            result.real = this->real + temp.real;
            return result;
            
        }

};
int main(int argc, char const *argv[])
{
    Complex A(1,1.5);
    Complex B(2,2.5);
    Complex C{};

    int reals =  A +12;
    float imgs = A +1.5f;

    C = A+B;
    // std::cout << std::endl;
    // std::vector<Complex> v{A,B,C};
    // std::sort(v.begin(), v.end());
    
    return 0;
}
