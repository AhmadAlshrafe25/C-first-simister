#include <iostream>

int main(){

std::string name;

std::cout <<"Enter your name: ";
std::getline(std::cin, name);

//if(name.length() > 12){
//    std::cout << "Your name can't be this long";
//}
//else{
//    std::cout << "Welcome " << name;
//}
//length method

//if(name.empty()){
//    std::cout << "You didn't type a name";
//}
//else{
//    std::cout << "Welcome"<<name ;
//}
// empty method : if empty so be 

//name.clear();
//std::cout << "Hello" << name ;
//clear method : clears the name and delete it 

//name.append("@gmail.com");
//std::cout << "Hello " << name ;
//append method : straps a name to it 

//std::cout << name.at(0);
//at() : gives the inital in the number between the perinthses

//name.insert(0 , "@");
//std::cout << name ;
//insert method to insert something in the string

//std::cout << name.find(' ');
//find() to find a certin charcter

//name.erase(0,3);
//std::cout << name;

    return 0;
}