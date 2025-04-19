#include <iostream>

int main() {
  int catAge;
  int humanYears;

  std::cout<<"Welcome to the Cat Years! This only works for the cats older than 2 years old.\n";

  std::cout<<"Enter your cat's age: \n";
  std::cin>>catAge;

  humanYears=(catAge-2)*4+24;

  std::cout<<"Your cat is "<<humanYears<<" old in human years.";
}
