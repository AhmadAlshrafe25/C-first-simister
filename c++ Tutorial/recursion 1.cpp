#include <iostream>

int factorial(int num);

int main(){
//recursion = a programming technique where a function
//            invokes itself from within
//            break a complex concept into a repatable single steps

std::cout << factorial(10);

    return 0;
}

int factorial(int num){
   if(num > 1){
    return num * factorial(num - 1);
   }
else{
    return 1;
}
}
