#include <iostream>
using namespace std;

class Year{
    public:
        Year(int year){ 
            this->year = year; //Explicitly telling which year is being used
        };
        int year{};
};

int main(){
    Year this_year{2023};
    cout<<"this year is: "<<this_year.year<<endl;
}