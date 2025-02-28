#include <iostream>

class student{
    public:
    std::string name;
    int age;
    double gpa;

    student(std::string name , int age , double gpa){
        this ->name = name;
        this ->age = age;
        this ->gpa = gpa;
    }

};

int main(){
//constructor = spical method that is automatucally called when an object is instantiated
//              useful for assigning values to attributes as arguments

student student1("Sponge Bob" , 20 , 3.3);
student student2("Patrick" , 25 , 2.5);
student student3("Sandy" , 19 , 4.4);

std::cout << student3.name << '\n';
std::cout << student3.gpa << '\n';
std::cout << student3.age << '\n';

    return 0;
}