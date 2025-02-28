#include <iostream>

class Human{
    public:
    std::string name = "Rick";
    std::string job = "Scientist";
    int age = 70;

    void eat(){
        std::cout << "This person is eating\n";
    }
    void drink(){
        std::cout << "This person is drinking\n";
    }
    void sleep(){
        std::cout << "This person is sleeping\n";
    }

};

int main(){
//object = A collection of attributes and methods
//         they can have characteristics and could preform actions
//         can be used to mimic real world iteams (ex . phone , book)
//         created from a class which acts as a "blue-print"

Human human1;
Human human2;

human1.name = "crow";
human1.job = "Tech guy";
human1.age = 19;

human2.name = "Ahmad";
human2.job = "AI";
human2.age = 18;

std::cout << human1.name << '\n';
std::cout << human1.age << '\n';
std::cout << human1.job << '\n';

std::cout << human2.name << '\n';
std::cout << human2.age << '\n';
std::cout << human2.job << '\n';


human1.eat();
human1.drink();
human1.sleep();

human2.eat();
human2.drink();
human2.sleep();

    return 0;
}