#include <iostream>

namespace first{
    int x = 1 ;
}

namespace second{
    int x = 2;
}

int main(){

//Namespace = provides a solution for preventing name conflicts
//            in large projects .Each entity needs a unique name
//            A namespace allows for identically named entities
//            as long as the namespaces are diffrenet
using namespace second;


std::cout << x ;/*:: the two scope reslution opertoers*/
    return 0 ;
}