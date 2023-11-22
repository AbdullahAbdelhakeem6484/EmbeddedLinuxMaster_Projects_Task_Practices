#include<iostream>
void fun(int x, int y=3){
    std::cout << x<< "" << y<<std::endl;
}

void fun(int x, float y=2){
    std::cout << "Hello float" << std::endl;
}
int main(){
    // fun(2);// take care 
    fun(2,3);
    return 0;
}