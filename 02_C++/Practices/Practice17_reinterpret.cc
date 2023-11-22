// #include<iostream>
// int main(){
//     int *p =  new int(65);
//     char * ch = reinterpret_cast<char *>(p);

//     return 0;
// }
#include<iostream>
class A{
    public:
        int x= 10;
        void fun_a(){
            std::cout << "IN Class A\n";
        }
};



class B{
    public:
        int x= 12;
        void fun_b(){
            std::cout << "IN Class B\n";
        }
    
};

int  main(int argc, char const *argv[])
{
    /* code */
    B * new_b= new B();
    A * new_a= reinterpret_cast<A*>(new_b);

    new_a->fun_a();
    std::cout << new_a->x;
    return 0;
}
