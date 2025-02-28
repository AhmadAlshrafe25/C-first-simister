#include <iostream>


struct car{
    std::string model ;
    int year ; 
    std::string color ;
};
void printcar(car &car);
void paintcar(car &car ,std::string color);

int main(){

    car car1;
    car car2;

    car1.model = "Nissan";
    car1.year = 1992;
    car1.color = "blue";

    car2.model = "Lambporgini";
    car2.year = 2006;
    car2.color = "orange";

    paintcar(car1 , "Silver");
    paintcar(car2 , "Black");


    printcar(car1);
    printcar(car2);

    return 0;
}
void printcar(car &car){
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void paintcar(car &car ,std::string color){
car.color = color;
}
// if you want to change the orignal u need the & "adress of operater"