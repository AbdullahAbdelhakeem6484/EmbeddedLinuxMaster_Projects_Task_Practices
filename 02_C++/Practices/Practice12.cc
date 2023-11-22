#include<iostream>
int main(){
    int *ptr = new int;
    *ptr = 42;
    delete ptr;
    ptr = nullptr;
    return 0;
}