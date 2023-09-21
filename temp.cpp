#include <iostream>
#include <conio.h>
#include <string>

struct College {
    std::string name;
    // Other members of the College struct
};

void print(College colleges[], size_t numColleges) {
    for (size_t i = 0; i < numColleges; i++) {
        std::cout << colleges[i].name << std::endl;
        std::cout<<colleges<<std::endl;
    }
}

int main() {
    College colleges[3]; // Example array of colleges
    colleges[0].name = "College A";
    colleges[1].name = "College B";
    colleges[2].name = "College C";

    print(colleges, sizeof(colleges) / sizeof(colleges[0]));

    return 0;
}
