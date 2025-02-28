#include <iostream>

int main(){
//pointers = variable that stores a memory adress of another variable
//           sometimes it's easier to work with an adress

/*
& adress-of operator
* dereference operator
*/

std::string name = "Ahmad";
int age = 21 ;
std::string freefalafel[5] = {"Falafel1" , "Falafel2", "Falafel3", "Falafel4", "Falafel5"};

std::string *pName = &name;
int *pAge =  &age;
std::string *pFreeFalafel = freefalafel;

std::cout << *pName<<'\n';
std::cout << *pAge<<'\n';
std::cout << *pFreeFalafel<<'\n';

    return 0;
}