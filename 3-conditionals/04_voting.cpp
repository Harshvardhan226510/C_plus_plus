#include <iostream>

int main() {
 
int age=24;
bool citizen=true;
bool registered=false;

if (age >= 18 and citizen == true and registered == true) {
 std::cout<<"You can vote!\n";
}
else if (age< 18) {
 std::cout<<"You are not old enough to vote.\n";
}
else if (citizen==false) {
 std::cout<<"You are not eligible to vote.\n";
}
else if (registered ==false) {
 std::cout<<"You need to register first";
}
else {
 std::cout<<"You have not met the requirements. ";
}
