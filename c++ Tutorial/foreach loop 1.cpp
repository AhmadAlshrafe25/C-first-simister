#include <iostream>

int main(){

std::string students[] = {"sponge bob", "Patrick" , "Squidward" , "sandy"};

for(std::string student : students){
  std::cout << student <<'\n';
} 


    return 0;
}