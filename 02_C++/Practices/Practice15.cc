#include<iostream>
int main(){
    int a = 10;;
    char c = 'a';

    int *q = (int *) &c;
    // int *p = static_cast<int *>(&c);// take care invalid conversion
    return 0;
}