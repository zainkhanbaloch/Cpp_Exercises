#include <cstdint>
#include <iostream>

struct PodStruct {
 uint64_t a;
 char b[256];
 bool c;
};
int main() {
 PodStruct initialized_pod1{}; 
 PodStruct initialized_pod2 = {};  // All fields zeroed
//  std::cout<<initialized_pod1.b<<std::endl;
//  std::cout<<initialized_pod2.b<<std::endl;

 PodStruct initialized_pod3{ 42, "Hello" };  // Fields a & b set; c = 0
 PodStruct initialized_pod4{ 42, "Hello", true };  // All fields set


}