#include <iostream>
using namespace std;

class Year {
    private:
        int year{};
    public:
        Year(int year){
            this->year = year;
        };
        int get_year() const{
            return this->year;
        };
};

bool is_leap_year (const Year& year) {
        return year.get_year()%4==0?  true:  false;
};

int main(){
    Year myyear{2023};
    cout<<is_leap_year(myyear)<<endl;
};