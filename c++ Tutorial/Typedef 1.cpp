#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string , int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
/*typedef is used to create additonal name for another data type*/
using text_t = std::string;
using number_t = int;
/*'using' is more commonly used to replace the 'typedef'*/

int main(){

text_t firstname = "Ahmad";
number_t age = 18;

std::cout <<firstname <<'\n';
std::cout <<age << '\n';
    return 0 ;
}