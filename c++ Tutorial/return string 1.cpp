#include <iostream>

std::string Fullname(std::string first ,std::string last);

int main (){

std::string firstname;
std::string lastname;
std::string FN =Fullname(firstname,lastname);

std::cout<<"Hello " << FN;

    return 0;
}

std::string Fullname(std::string first ,std::string last){
    std::cout << "Enter your first name: ";
    std::cin >>first;

    std::cout << "Enter your last name: ";
    std::cin >>last;

    return first+ " " + last;

}