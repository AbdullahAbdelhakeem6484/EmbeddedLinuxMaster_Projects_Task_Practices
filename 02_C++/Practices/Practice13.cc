#include<iostream>

void fun(){
    std::cout << "Hello!"<< std::endl;
}
int main(){
    void (*funcptr)()=&fun;
    (*funcptr)();
    return 0;
}