#include <iostream>
#include <cstdio>

int main() {
srand(time(NULL));
int luck = std::rand() % 7;

if (luck == 0) {
 std::cout<<"Fortune is destined.";
}

else if (luck == 1) {
 std::cout<<"Fortune favours the brave.";
}

else if (luck == 2) {
 std::cout<<"Work Harder.";
}

else if (luck == 3) {
 std::cout<<"Not up to potential.";
}

else if (luck == 4) {
 std::cout<<"God's Luck.";
}

else if (luck == 5) {
 std::cout<<"On the right path.";
}

else if (luck == 6) {
 std::cout<<"Luck isn't the result of pure coincidence.";
}

else if (luck == 7) {
 std::cout<<"Always on top.";
}

else {
std::cout<<"Better luck next time.";
}
}
