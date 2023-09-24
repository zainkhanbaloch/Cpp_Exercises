#include <iostream>
#include <string>
using namespace std;

class College{
    public:
        College(string name,
            string address,
            string city,
            string level,
            string rating
         ) :
            name(new string(name)),
            address(new string(address)),
            city(new string(city)),
            level(new string(level)),
            rating(new string(rating))  {
                cout << "College created" << endl;
        };

        ~College(){
            delete name;
            delete address;
            delete city;
            delete level;
            delete rating;
            cout << "College destroyed" << endl;
        };

    string get_name() const{
        return *name;
    };
    string get_address() const{
        return *address;
    };
    string get_city() const{
        return *city;
    };
    string get_level() const{
        return *level;
    };
    string get_rating() const{
        return *rating;
    };

    private:
        string* name;
        string* address;
        string* city;
        string* level;
        string* rating;
};

int main() {
    College MyCollege{"My College", "My Address", "My City", "My Level", "My Rating"};
    cout << "College Name: " << MyCollege.get_name() << endl;
    cout << "College Address: " << MyCollege.get_address() << endl;
    cout << "College City: " << MyCollege.get_city() << endl;
    cout << "College Level: " << MyCollege.get_level() << endl;
    cout << "College Rating: " << MyCollege.get_rating() << endl;
    
}