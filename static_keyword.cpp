#include <iostream>
#include <string>
using namespace std;

static int myint{0};
//helpful in asynchronous programming
extern int myint2{1}; //same as static but access by others is not blocked when one translation unit is accessing it

void demo_with_static()
{
    // static variable
    static int count = 0;
    cout << count << " ";
 
    // value is updated and
    // will be carried to next
    // function calls
    count++;
}

void demo_without_static(){
    int count = 0;
    count++;
    cout << count << " ";
}
 
int main()
{
    for (int i = 0; i < 5; i++)
        demo_with_static();
    cout<<endl;
    for (int i = 0; i < 5; i++)
        demo_without_static();
    return 0;
}