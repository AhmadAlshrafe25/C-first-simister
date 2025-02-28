#include <iostream>

int main(){

 double temp;
 char unit;

 std::cout << "***** Temperature conversion *****\n";
 std::cout <<"F = Fahrenheit\n";
 std::cout <<"C = celsius\n";
 std::cout << "What unit would u like to convert to: ";
 std::cin >>unit;

 if(unit == 'F' || unit == 'f'){
    std::cout << "Enter the temperture in celsius: ";
    std::cin >> temp;

    temp = (1.8 * temp) + 32.0;
    std::cout <<"Temperature is : "<<temp <<" F\n";
 }
 else if(unit == 'C' || unit == 'c'){
    std::cout << "Enter the temperture in Fahrenheit: ";
    std::cin >> temp;

    temp = (temp - 32) / 1.8;
    std::cout <<"Temperature is : "<<temp <<" C\n";
 }
 else{
    std::cout << "Plese only enter C or F\n";
 }

 std::cout << "**********************************\n";

    return 0;
}