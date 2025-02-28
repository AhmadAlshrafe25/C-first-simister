#include <iostream>

int main(){
// null value = a spicial value that means something has no value.
//when a pointer is holding a null value that means the pointer is not pointing on anything
//nullptr = keyword represent a null pointer literal
//null pointers are useful to determin if an adress was successfully asigned to a pointer

int *pointer = nullptr ;
int x = 123;

pointer = &x;


if(pointer == nullptr){
    std::cout << "Adress was not assigned\n";
}
else{
    std::cout <<"Adress assingesd\n";
    std::cout << *pointer ;
}

    return 0;
}