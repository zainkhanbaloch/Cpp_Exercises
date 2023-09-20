#include <iostream>
#include <conio.h>

using namespace std;
int absolute_value(int num){
    if (num>=0){
        return num;
    } else {
        return -num;
    }
};

int main(){
    int n;
    cout<<"Enter the number to find the ABSOLUTE VALUE: "<<endl;
    cin>>n;
    cout<<"The absolute value of the number is "<<absolute_value(n)<<endl;
    getche();
};