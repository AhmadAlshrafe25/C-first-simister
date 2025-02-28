#include <iostream>
#include <cmath>

int main(){
//fills a range of elements with a spicific value
// fill(begin , end , value)

int size = 99;
std::string foods[size];

fill(foods,foods + (size/3) , "falafel");
fill(foods + (size/3),foods+(size/3)*2,"shwerma");
fill(foods + (size/3)*2,foods+(size/3)*3,"mandi");


for(std::string food : foods ){
std::cout << food << " ";
}

    return 0;
}