#include <iostream>

int main(){
//converting a value from one type to another

//double x = (int)3.14;
//char x = 100 ;

//std::cout << (char)100; 

int correct = 8;
int questions = 10;
double score = correct/(double)questions * 100;

std::cout << score << "%" << '\n';

    return 0 ;
}