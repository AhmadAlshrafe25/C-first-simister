#include <iostream>

void swap(std::string &x , std::string &y );

int main(){

 std::string x = "3ds";
 std::string y = "Jameed";

 swap( x ,  y );

 std::cout << "X: " << x << '\n';
  std::cout << "y: " << y << '\n';

    return 0;
}
void swap(std::string &x , std::string &y ){
     std::string temp ;

 temp = x;
 x = y;
 y = temp;
}