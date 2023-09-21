#include <iostream>
#include <conio.h>
using namespace std;

class Year{
    public:
        Year(int year){ //constructor
            this_year = year;
        };
        int get_year(){ //getter
            return this_year;
        };
        void set_year(int year){ //setter
            this_year = year;
        };

    private:
        int this_year{0}; //private var


};

int main(){

    Year my_year{2021};
    Year* my_pointer = &my_year;
    cout<<"my year is: "<<my_pointer ->get_year()<<endl;
    cout<<"my pointer is: "<<my_pointer<<endl;
    my_pointer->set_year(2023);
    cout<<"my year is: "<<(*my_pointer).get_year()<<endl;


};