#include <iostream>

class Stove{
    private:
    int temperature = 0;
    public:

    int getTemperature(){
        return temperature;
    }
    void setTemp(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature >= 10){
            this->temperature = 10;
        }
        else {
            this -> temperature = temperature;
        }
        
    }
};

int main(){
// Abstraction = hiding unecessary data from outside a class
// getter = function that makes a private attribute readable
// setter = function that makes a private attribute writeable

    Stove stove;

    stove.setTemp(10000000);

    std::cout << "The Temp setting is: "<<stove.getTemperature()<<'\n';

    return 0;
}