#include <iostream>

int main() {
for (int i = 0 ; i < 101 ; i++) {
  if (i%3 == 0 and i%5 == 0) {
   std::cout<<"FizzBuzz\n";
  }
  else if (i%3 == 0) {
   std::cout<<"Fizz\n";
  } 
  else if (i%5 == 0) {
   std::cout<<"Buzz\n";
  }
  else {
   std::cout<<i<<"\n";
  }
 }
  
}
