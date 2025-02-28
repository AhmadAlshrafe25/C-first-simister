#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)
int main(){

std::string name;
int age;

std::cout <<"What's ur age? ";
std::cin >> age;

std::cout << "What's ur full name? ";
//std::cin >>; name  for a single name
std::getline(std::cin >> std::ws , name);//for a whole line


std::cout << "Hello " << name << '\n';
std::cout << "You are " << age << " Years old";

    return 0 ;
}