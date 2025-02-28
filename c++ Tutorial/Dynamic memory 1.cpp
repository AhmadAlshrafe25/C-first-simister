#include <iostream>

int main(){
//dynamic memo = memo that is allocated after the program
//               is already compiiled & running
//               use the 'new' operator to allocate
//               memory in the heap rather than the stack 

//               useful when we don't know how much memo
//               we will need. makes the program more flexible,
//               especially when accepting user input

//int *pnum = NULL;
//pnum = new int ;
//*pnum = 21;
//std::cout << "Adress: "<< pnum << '\n';
//std::cout << "Adress: "<< *pnum << '\n';
//delete pnum;

char *pgrade = NULL;
int size;

std::cout << "How many grades to enter in : ";
std::cin >> size;
pgrade = new char[size] ;

for(int i = 0 ; i < size ; i++){
    std::cout << "Enteer grade #: " << i + 1 << ": ";
    std::cin >> pgrade[i];
}

for(int i = 0; i < size ; i++){
    std::cout << pgrade[i] << " ";
}

delete[] pgrade;

    return 0;
}