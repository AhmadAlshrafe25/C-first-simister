#include <iostream>
#include <cmath>

double square(double length);
double cube(double length);

int main(){
//return = return a value back to a spot
//         where you called the encompassing function

double length = 6.0;
double area = square(length);
double volume = cube(length);

std::cout << "Area " << area << " Cm^2\n";
std::cout << "volume " << volume << " Cm^3\n";

    return 0;
}

double square(double length){
return length * length;
}

double cube(double length){
return pow(length , 3);
}
