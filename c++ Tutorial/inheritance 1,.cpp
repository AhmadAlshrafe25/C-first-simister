#include <iostream>

class Animal{
    public:
        bool alive = true;

        void eat(){
            std::cout << "This animal is eating\n";
        }
};

class Dog : public Animal{
    public:

    void bark(){
        std::cout << "Dog goes woofff\n";
    }
};

class Cat : public Animal{
    public:

    void meow(){
        std::cout << "Meowwwwwwwwwwwwwwwww\n";
    }
};

int main(){
    // inheritance = A class can recieve attributes and methods from another class
    //               Children classes inherit from Parent class
    //               helps to reuse similar code found within multiple classes

    Dog dog;
    Cat cat;

    std::cout << cat.alive << '\n' ;
    cat.eat();
    cat.meow();

    

    return 0;
}