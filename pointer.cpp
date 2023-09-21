#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    //Pointer
    int mynumber{2};
    cout<<"my number is: "<<mynumber<<endl;
    int *mynumber_pointer = &mynumber;
    cout<<"my pointer is: "<<mynumber_pointer<<endl;

    //Dereference Operator
    *mynumber_pointer = 3;
    cout<<"my number is: "<<*mynumber_pointer<<endl;
    cout<<"my pointer is: "<<mynumber_pointer<<endl;
    cout<<"my pointer is: "<<&mynumber<<endl;
    

    getche();

};