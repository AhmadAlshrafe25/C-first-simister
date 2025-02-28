#include <iostream>
#include <thread>
#include <chrono>

double Needs(double TotalCash);
double Wants(double TotalCash);
double Savings(double TotalCash);

int main(){
double TotalCash = 0;

std::cout <<"*************************************\n";
std::cout << "Enter the amount of money you have: ";
std::cin  >> TotalCash;

std::cout << "The amount of money you have for NEEDS is: " << Needs(TotalCash)<<'\n';
this_thread::sleep_for(chrono::seconds(2));
std::cout << "The amount of money you have for NEEDS is: " << Wants(TotalCash)<<'\n';
this_thread::sleep_for(chrono::seconds(2));
std::cout << "The amount of money you have for NEEDS is: " << Savings(TotalCash)<<'\n';
this_thread::sleep_for(chrono::seconds(2));
std::cout <<"*************************************\n";



    return 0;
}

double Needs(double TOT){
return TOT * 0.5;
}
double Wants(double TOT){
return TOT * 0.3;
}
double Savings(double TOT){
return TOT * 0.2;
}