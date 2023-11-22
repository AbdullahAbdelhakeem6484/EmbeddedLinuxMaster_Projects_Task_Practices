#include<iostream>
/**
 * g++ test.cc
 * size ./a.out
 * 
*/
void test(){
    std::cout << "Hello" << std::endl;
}
/**
 * abdullah@abdullah-Lenovo-ideapad-330-15IKB:/media/abdullah/Abdullah/02_ES_Linux/Moatasem/EmbeddedLinuxMaster_Projects&Tasks/EmbeddedLinuxMaster_Projects_Task_Practices/02_C++/Practices$ objdump -x --demangle  | grep -i test
 * 0000000000001249 l     F .text  0000000000000019              _GLOBAL__sub_I__Z4testv
 * 00000000000011a9 g     F .text  0000000000000036              test()
 * abdullah@abdullah-Lenovo-ideapad-330-15IKB:/media/abdullah/Abdullah/02_ES_Linux/Moatasem/EmbeddedLinuxMaster_Projects&Tasks/EmbeddedLinuxMaster_Projects_Task_Practices/02_C++/Practices$ size ./a.out 
 *  text    data     bss     dec     hex filename
 *  2324     664     280    3268     cc4 ./a.out
 * abdullah@abdullah-Lenovo-ideapad-330-15IKB:/media/abdullah/Abdullah/02_ES_Linux/Moatasem/EmbeddedLinuxMaster_Projects&Tasks/EmbeddedLinuxMaster_Projects_Task_Practices/02_C++/Practices$ 
 * 
*/

// int main(){
//     test();
//     return 0;
// }

/**
 * xMaster_Projects_Task_Practices/02_C++/Practices$ size ./a.out 
 * text    data     bss     dec     hex filename
 * 2594     672     280    3546     dda ./a.out
 * abdullah@abdullah-Lenovo-ideapad-330-15IKB:/media/abdullah/Abdullah/02_ES_Linux/Moatasem/EmbeddedLinuxMaster_Projects&Tasks/EmbeddedLinuxMaster_Projects_Task_Practices/02_C++/Practices$ objdump -x --demangle  | grep -i lam
 * 0000000000001200 l     F .text  000000000000003a              main::{lambda()#1}::operator()() const
 * abdullah@abdullah-Lenovo-ideapad-330-15IKB:/media/abdullah/Abdullah/02_ES_Linux/Moatasem/EmbeddedLinuxMaster_Projects&Tasks/EmbeddedLinuxMaster_Projects_Task_Practices/02_C++/Practices$ 
*/
int main(){
    [](){
        std::cout << "Hello" << std::endl;
    }();/* code */
}