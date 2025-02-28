#include <iostream>

void bakepizza();
void bakepizza(std::string topping1);
void bakepizza(std::string topping1,std::string topping2);

int main(){


 bakepizza("Pepperoni", "mushrooms");

    return 0;
}

void bakepizza(){
    std::cout << "Here is ur pizza\n";
}
void bakepizza(std::string topping1){
std::cout << "Here is ur " << topping1 << " Pizza\n";
}
void bakepizza(std::string topping1,std::string topping2){
std::cout << "Here is ur " << topping1 <<" and "<< topping2<< " Pizza\n";
}

