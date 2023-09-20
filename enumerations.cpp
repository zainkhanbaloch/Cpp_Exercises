#include <iostream>
#include <conio.h>

enum class Color{
    red, green, blue
};

 

int main(){
    
   

    int selectedint;
    std::cout<<"Select one colour out of these [1:red, 2:green, 3:blue]: ";
    std::cin>>selectedint;
    Color color;
    switch (selectedint) {
    case 1:
        color = Color::red;
        break;
    case 2:
        color = Color::green;
        break;
    case 3:
        color = Color::blue;
        break;
    default:
        std::cout << "Invalid selection" << std::endl;
        return 1; // Exit the program with an error code
    }
    std::cout << "You selected " << static_cast<int>(color) << std::endl;
    getch();
}