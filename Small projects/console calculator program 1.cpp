#include <iostream>

int main(){

float x;
float y;
double sum;
char op;

std::cout<<"***********CALCULATOR***********\n";

std::cout << "Enter x = ";
std::cin >> x ;

std::cout << "Enter y = ";
std::cin >> y ;

std::cout << "Enter OP (+ - * /) ";
std::cin >> op ;

switch(op){
    case '+':
    sum = y + x ;
    std::cout<<"sum = "<<sum <<'\n' ;
    break;

    case '-':
    sum = y - x ;
    std::cout<<"sum = "<<sum <<'\n' ;
    break;

    case '*':
    sum = y * x ;
    std::cout<<"sum = "<<sum <<'\n' ;
    break;

    case '/':
    sum = y / x ;
    std::cout<<"sum = "<<sum <<'\n' ;
    break;
    
    default:
    std::cout << "That wasn't a valid op";
}

std::cout<<"********************************\n";

    return 0;
}