#include <iostream>
using namespace std;

enum class Operation{
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator{
    public:        
        Calculator(Operation passed_operation){
            operation = passed_operation;
        };
        
        int calculate(int a, int b){
            switch (operation){
                case Operation::Add:
                    return a + b;
                case Operation::Subtract:
                    return a - b;                    
                case Operation::Multiply:
                    return a * b;                    
                case Operation::Divide:
                    return a / b;                    
                default:
                    cout<<"Invalid Operation"<<endl;
                    return 0;                   
            }
        };
    
    private:    
        Operation operation{};
};

int main() {
    Calculator calculator{Operation::Subtract};
    int result = calculator.calculate(2,3);
    cout<<"The result of the operation is: "<<result<<endl;

};