#include <iostream>

int main() {
 std::cout<<"----------------------------------------------\n";
 std::cout<<"|                                            |\n";
 std::cout<<"|              TRIVIA QUIZ                   |\n";
 std::cout<<"|                                            |\n";
 std::cout<<"----------------------------------------------\n";

 int answer;

 std::cout<<"Q1) What is the name of the world's longest river?\n";
 std::cout<<"1) Missouri River\n";
 std::cout<<"2) Nile\n";
 std::cout<<"3) Amazon River\n";
 std::cout<<"4) Yangtze River\n";

 std::cin>>answer;

 if (answer == 2) {
  std::cout<<"You got it right!\n";
 } 
 else {
  std::cout<<"Wrong answer\n";
 }

 std::cout<<"Q2) How many bones are there in human body?\n";
 std::cout<<"1) 92\n";
 std::cout<<"2) 150\n";
 std::cout<<"3) 206\n";
 std::cout<<"4) 10\n";

 std::cin>>answer;

 if (answer == 3) {
  std::cout<<"You got it right!\n";
 }
 else {
  std::cout<<"Incorrect answer\n";
 }
