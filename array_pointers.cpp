#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class College{
    public:
       string name{"no name"};
};

void print_college(College* college, int college_numbers){
    for (size_t i = 0; i < college_numbers; i++){
        cout<<college[i].name<<endl;
        cout<<(college+i)->name<<endl;
    }
    
};



int main(){
    College good_colleges[]{"BCC", "LGS", "APS"};
    College* college_pointer = good_colleges;
    cout<<"first college is: "<<college_pointer->name<<endl;
    print_college(good_colleges, sizeof(good_colleges)/sizeof(College));
    cout<<good_colleges<<endl;


};