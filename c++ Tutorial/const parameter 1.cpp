#include <iostream>
#include <string>
void printinfo(const std::string &name , const int &age);

int main(){
//const prameter = makes it effectivly read-only
//makes code more secure & useful for ref and pointers

std::string name = "ahmad";
int age = 18;

printinfo( name ,  age);

    return 0;
}
void printinfo(const std::string &name , const int &age){
std::cout << name << '\n';
std::cout << age << '\n' ;
}