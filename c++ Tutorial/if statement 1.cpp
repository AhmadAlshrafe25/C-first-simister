#include <iostream>

int main(){
// you do something if a condition is true , if not
//don't

int age ; 
std::cout << "Enter age : ";
std::cin >> age ;

 if(age >= 100){
    std::cout << "You are too old to enter this site";
} 
else if(age >= 18){
    std::cout << "Welcome to website";
}
else if(age < 0){
    std::cout << "You haven;t been born yet";
}
else {
    std::cout << "You are not old enough to enter!";
}
//the order of ur if and else if matters

    return 0;
}