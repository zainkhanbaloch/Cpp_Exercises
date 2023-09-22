#include <iostream>
#include <conio.h>

using namespace std;

//passing by reference rather than value
int increment(int& number){
    return ++number;
}

int main(){
    int mynumber{2};
    int& myref = mynumber;
    int* mypointer = &mynumber;
    cout<<"my number is: "<<mynumber<<endl;

    increment(myref);
    cout<<"my new number is: "<<mynumber<<endl;
    increment(*(mypointer));
    cout<<"my latest number is: "<<mynumber<<endl;

}