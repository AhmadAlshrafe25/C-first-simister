#include <iostream>
template <typename T , typename U>

auto max(T x , U y){
    return (x > y) ? x : y ;
}




int main(){
// function template = describes what a function looks like.
//                     can be used to generate as many overloaded function as u want
//                     as needed , each have diff data types


std::cout << max(1,1.1) << '\n';

    return 0;
}