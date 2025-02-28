#include <iostream>
int num = 2;
void printnum();
// a funtion will resort to a local varible first
int main(){
// Local = declared inside a function or block {}
// Global = declared outside of all functions


int num = 3;
printnum();
std::cout << ::num << '\n';

    return 0;
}

void printnum(){
    int num = 25;
std::cout<< ::num <<'\n';
}
// :: will use the global insted of the local var