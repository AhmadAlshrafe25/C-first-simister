#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

int main(){
//struct = a structure that group related variables under one name
//         a struct can store many diffrent data types (string , int , double , bool , etc.)
//         var in a struct are known as "Members"
//         members can be access with . "Class member Access operation"

 student crow;
 crow.name = "ME";
 crow.gpa = 3.33;
 crow.enrolled = true;

 student ahmad;
 ahmad.name = "Him";
 ahmad.gpa = 3.25;
 ahmad.enrolled = true;


 std::cout << crow.name << '\n';
 std::cout << crow.gpa << '\n';
 std::cout << crow.enrolled << '\n';

 std::cout << ahmad.name << '\n';
 std::cout << ahmad.gpa << '\n';
 std::cout << ahmad.enrolled << '\n';


    return 0;
}