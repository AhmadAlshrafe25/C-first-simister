#include <iostream>

double gettotal(double prices[]);

int main(){

double prices[] = { 40.19 , 30.50 , 9.58 , 3.58};

double total = gettotal(prices);

std::cout << "your total is " << total;

    return 0;
}
double gettotal(double prices[]){
return prices[0] + prices[1] + prices[2] + prices[3];
}