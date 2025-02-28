#include <iostream>

int main(){
std::string cars[3] = {"Corvette","NISSAN","TOYOTA"};
// you can assign the values after the decleration of an array
cars[0] = "MUSTING";
cars[1] = "Camry";

std::cout <<' '<< cars[0];
std::cout <<' '<< cars[1];
std::cout <<' '<< cars[2];


    return 0;
}