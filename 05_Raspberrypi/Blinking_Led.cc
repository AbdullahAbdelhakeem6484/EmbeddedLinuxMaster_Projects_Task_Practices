/*
    arm-linux-gnueabihf-gcc Blinking_Led.cc -o led
    ./led

*/

#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
// #include<stdio.h>
#include<iostream>

#define PIN_NUMBER "21"
#define PIN_DIRECTION "out"
#define PIN_HIGH "1"
#define PIN_LOW "0"


 int main()
 {
    int fd;
    fd  =  open("/sys/class/gpio/export", O_WRONLY);
    if(fd == -1)
    {
        // printf("We Can not open file ");
        std::cout << "We Can not open file ";
    }

    write(fd, PIN_NUMBER, strlen(PIN_NUMBER));
    close(fd);
    sleep(1);
    fd = open("/sys/class/gpio/gpio21/direction", O_WRONLY);
    if(fd == -1)
    {
        // printf("We Can not open file ");
        std::cout << "We Can not open file ";

    }

    write(fd, PIN_DIRECTION, strlen(PIN_DIRECTION));
    close(fd);



    fd = open("/sys/class/gpio/gpio21/value", O_WRONLY);
    if(fd == -1)
    {
        // printf("We Can not open file ");
        std::cout << "We Can not open file ";

    }
    for(int i=0 ; i<5 ; i++)
    {
        std::cout << "LED IS HIGH " << std::endl;
        write(fd, PIN_HIGH ,strlen(PIN_HIGH));
        sleep(2);

        std::cout << "LED IS LOW " << std::endl;
        write(fd, PIN_LOW,strlen(PIN_HIGH));
        sleep(2);
    }

    close(fd);
    return 0;

 }