#include <iostream>

char getuserchoice();
char getcomputorchice();
void showchoice(char choice);
void choosewinner(char player , char computer);

int main(){
char player;
char computer;

player = getuserchoice();
std::cout << "Your choice: ";
showchoice(player);

computer = getcomputorchice();
std::cout << "Computer's choice: ";
showchoice(computer);

choosewinner(player , computer);

    return 0;
}

char getuserchoice(){
char player;
std::cout << "Rock-paper-scissors Game!\n";

do{
    std::cout << "choose one of the following\n";
    std::cout << "*************************\n";
std::cout << "'r' for rock\n";
std::cout << "'p' for paper\n";
std::cout << "'s' for scissors\n";
std::cin >> player ;

}while (player != 'r' && player != 'p' && player != 's' );

return player;
}
char getcomputorchice(){
    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:return 'r';    
    case 2: return 'p';
    case 3: return 's';  
    }

return 0;
}
void showchoice(char choice){
switch (choice)
{
case 'r': std::cout << "Rock \n";
break;
case 'p': std::cout << "Paper \n";
break;

case 's':std::cout << "Scissors\n";
break;
}
}
void choosewinner(char player , char computer){

    switch (player)
    {
    case 'r': if(computer == 'r'){
        std::cout << "It's a tie\n";
    }
    else if(computer == 'p'){
        std::cout << "You lose\n";
    }
    else{
        std::cout << "You win\n";
    }
    break;
    case 'p': if(computer == 'r'){
        std::cout << "you win\n";
    }
    else if(computer == 'p'){
        std::cout << "a tie\n";
    }
    else{
        std::cout << "You lose\n";
    }
    break;
    case 's': if(computer == 'r'){
        std::cout << "you lose\n";
    }
    else if(computer == 'p'){
        std::cout << "You win\n";
    }
    else{
        std::cout << "You lose\n";
    }
    break;
    }

}
