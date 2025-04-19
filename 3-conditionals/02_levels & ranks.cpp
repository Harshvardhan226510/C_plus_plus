#include <iostream>

int main() {
 int level=72;

 if (level < 5) {
 std::cout<<"Bronze";
 }
 else if (level < 20) {
  std::cout<<"Silver";
 }
 else if (level < 30) {
 std::cout<<"Platinum";
 }
 else if (level < 45) {
  std::cout<<"Diamond";
 }
 else if (level < 60) {
  std::cout<<"Heaoric";
 } 
 else if (level < 70) {
  std::cout<<"Master";
 }
 else if (level < 80) {
  std::cout<<"GrandMaster";
 }
 else {
  std::cout<<"Out of League";
 }
}
