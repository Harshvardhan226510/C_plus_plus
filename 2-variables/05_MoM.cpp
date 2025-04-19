#include <iostream>

int main() {
double month1;
double month2;

std::cout<<"Enter mertic of month 1: ";
std::cin>>month1;

std::cout<<"Enter metric of month 2: ";
std::cin>>month2;

double MoM = ((month2 - month1)/(month1))*100;
std::cout<<"The rate of change in a metric over a one-month: "<<MoM<<"%";

}
