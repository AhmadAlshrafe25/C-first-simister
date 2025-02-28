#include <iostream>

int main(){

    int rows = 3;
    int colums = 3;

    

     std::string cars[rows][colums]={{"musting" , "escape" , "f-150"},
                           {"corveete","equinox","silverado"},
                           {"challenger","Durango","ram 1500"}};

    for(int i = 0 ; i < rows ; i++ ){
        for(int j = 0 ; j < colums ; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }
    

    return 0;
}