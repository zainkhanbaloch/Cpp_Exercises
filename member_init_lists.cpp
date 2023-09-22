#include <iostream>
#include <string>
using namespace std;

struct College{
    string name{};
    string principal{};
    string address{};

    College(string name, string principal, string address) : name{name}, principal{principal}, address{address} {

    };

    College(){

    };
};

int main(){
    College mycollege{"BCC", "Mr. Robot", "123 Main St."};
    cout<<mycollege.name<<mycollege.principal<<mycollege.address<<endl;
}