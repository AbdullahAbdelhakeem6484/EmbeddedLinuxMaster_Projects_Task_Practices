#include<iostream>
int main(){
    const int val = 10;
    const int *ptr = & val;
    int *ptr1 =  const_cast<int *>(ptr);
    return 0;
}