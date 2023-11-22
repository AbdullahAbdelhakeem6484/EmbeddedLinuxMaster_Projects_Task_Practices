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
        void operator ++(){
            this->real++;
        }
        int  operator ++(int ){
            int temp = real;
            this->real++;
            return temp;
        }

        void print(){
            std::cout << "Real is " << real << " Img is " << img << std::endl;
        }


};


int main(int argc, char const *argv[])
{
   Complex B (2,2.5);
   ++B;
   B.print();

   int y = B++;

   std::cout << y << std::endl;
   B.print();
    return 0;
}
