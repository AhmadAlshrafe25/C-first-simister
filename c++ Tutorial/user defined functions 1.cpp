#include <iostream>

void HappyBirthday(std::string birthdayboi , int birthyear);


int main(){
// function = a block of reusable code

std::string name = "Ahmad";
int age = 18 ;

HappyBirthday(name , age);//scope = incerting the variable in the main fun

    return 0;
}

void HappyBirthday(std::string birthdayboi ,int birthyear){
    std::cout << "Happy birthday to "<< birthdayboi <<'\n';
    std::cout << "Happy birthday to "<< birthdayboi <<'\n';
    std::cout << "Happy birthday dear "<< birthdayboi <<'\n';
    std::cout << "Happy birthday to "<< birthdayboi <<'\n';
    std::cout << "You are " << birthyear << " Years old";
}