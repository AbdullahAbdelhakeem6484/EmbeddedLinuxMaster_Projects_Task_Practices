#include <iostream>

/**
 * he code you've provided has a problem that can lead to undefined behavior and, in this case, a segmentation fault.
 * In the fun function, you are returning a reference to a local variable value, 
 * which goes out of scope when the function exits. Returning a reference to a local variable is dangerous 
 * because the memory it refers to becomes invalid after the function returns
 * 
*/
int& fun(){
    int value =10;
    return value;
}
int main(int argc, char const *argv[])
{
    /* code */
    int rvalue = fun();
    int& refx = fun();
    const int& cref = fun();
    fun() = 12;
    return 0;
}
