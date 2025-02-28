#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

        Pizza(std::string topping1){
            this -> topping1 = topping1;
        }
        Pizza(std::string topping1,std::string topping2){
            this -> topping1 = topping1;
            this -> topping2 = topping2;
        }
        Pizza(){
            
        }
        
};

int main(){
    //overloaded constructors = multiple constructors w/ same name but diffrent parameters
    //                          allows for varying arguments when instantianting an object

    Pizza pizza1("Salami");
    Pizza pizza2("Peper" ,"Salami");
    Pizza pizza3;


    std::cout << pizza2.topping1<<" and "<<pizza2.topping2<<'\n';

    return 0;
}