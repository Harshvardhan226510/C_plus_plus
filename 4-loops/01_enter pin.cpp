#include <iostream>
int main() {
int pin =0;

std::cout<<"BANK OF INDIA\n";

std::cout<<"Enter you pin: ";
std::cin>>pin;

while (pin != 1234) {
 std::cout<<"Incorrect pin ";
}

if (pin == 1234) {
 std::cout<<"Correct pin";
}
 
}
