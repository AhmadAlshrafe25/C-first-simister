#include <iostream>

int main(){
//determines the size in bytes
 
 std::string name = "Ahmad";
double gpa = 2.5;
char grade = 'A';
bool student = true;
char grades[] = {'A','B','C','D','F'};

std::cout << sizeof(gpa)<< " bytes\n";
std::cout << sizeof(double)<< " bytes\n";
std::cout << sizeof(name)<< " bytes\n";
std::cout << sizeof(grade)<< " bytes\n";
std::cout << sizeof(student)<< " bytes\n";
std::cout << sizeof(grades)/sizeof(char)<< " elements\n";

    return 0;
}