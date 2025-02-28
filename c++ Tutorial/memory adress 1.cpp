#include <iostream>

int main(){
//memory adress = a location in memory where data is stored
// we can acsses with & (adress-of operator)

std::string name = "Bro";
int age = 21;
bool student = true;

std::cout << &name << '\n';
std::cout << &age << '\n';
std::cout << &student << '\n';

    return 0;
}