#include <iostream>
#include <cmath>

int main(){

int c ; 
int a ;
int b ;

std::cout << "Enter a = ";
std::cin >> a ;

std::cout << "Enter b = ";
std::cin >> b ; 

c = sqrt((pow(a,2)+pow(b,2)));

std::cout << "The result is = " << c;

    return 0 ;
}