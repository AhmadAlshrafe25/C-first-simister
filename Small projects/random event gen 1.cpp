#include <iostream>
#include <ctime>

int main(){

  srand(time(0));
  int randnum = (rand() % 5) + 1 ;

  switch (randnum)
  {
  case 1 : std::cout << " You win a bumper sticker\n";
  break;

  case 2 :std::cout << " You win a T-shirt\n";
  break;

  case 3 :std::cout << " You win a free lunch\n";
  break;

  case 4 :std::cout << " You win a gift card\n";
  break;

  case 5 :std::cout << " You win a concert ticket\n";
  break;
    
  }

    return 0 ;
}