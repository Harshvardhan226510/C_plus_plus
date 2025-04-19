#include <iostream>

int main() {
  for (int i = 99 ; i > 0; i--) {
   std::cout << i << " Bottles of beer on the wall\n";
   std::cout << i << " Bottles of beer\n";
   std::cout << "Take one down, pass it around\n";
   std::cout << i-1 <<" bottles of beer on the wall\n";
  }
