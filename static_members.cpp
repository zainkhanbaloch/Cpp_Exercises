#include <iostream>
#include <string>
using namespace std;

struct MyClass
{
    static string myname;
    static void setname(string name){
        myname = name;
    }
};

string MyClass::myname = "Eren Yeager";

int main(){

    MyClass::setname("Levi");

};
