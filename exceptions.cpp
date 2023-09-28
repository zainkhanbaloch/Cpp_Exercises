#include <iostream>
#include <stdexcept>
using namespace std;

//extending the stdlib error classes
class DivideByZeroError : public domain_error {
    public:
        string my_error_type = "DivideByZeroError";
};

int divide(int x, int y) {
    if(y == 0) throw domain_error{"You tried to divide the number by 0"};
    return (x/y);
};

int main() {
    try
    {
        cout<<divide(3,1)<<endl;
    }
    catch(const std::domain_error& e)
    {
        cout<< "Exception Occured: "<< e.what() << endl;
    } 
    catch(const std::runtime_error& e) {
        //runtime error occurred
        //and yes we can also rethrow an error in catch blocks
    } 
    catch(const DivideByZeroError& e) {
        //user-defined error
    }
    catch(...){
        //panic...unknown error occurred
        cout<<"Unknown exception occurred"<<endl;
    }
    
};