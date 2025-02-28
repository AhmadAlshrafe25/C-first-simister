#include <iostream>

int main(){
//break out of loops
//continue skips iteration

for(int i =1 ; i <=20 ; i++){
    if(i == 13){
        continue;
    }
    std::cout << i << '\n';
}

    return 0 ;
}