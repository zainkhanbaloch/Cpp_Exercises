#include <cstdio>
#include <iostream>
#include <conio.h>
int main() {
    char name[] = "Thorfinn";
    for(char myname : name) {
        std::cout<<myname;
    };
    unsigned long long size = sizeof(name);
    std::cout<<"\nSize of name is: "<<size<<std::endl;
    getch();
    
}