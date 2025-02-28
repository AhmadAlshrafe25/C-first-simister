#include <iostream>

int main(){

    std::string questions[] = {"1.What year was c++ created??: ",
                               "2.who invented c++: ",
                               "3. what is the predecesso of c++??: ",
                               "4.is the Earth flat?"};

    std::string options[][4] = {{"A. 1969","B. 1975" ,"C. 1985", "D.1989"},
                               {"A. Guido van rossum" , "B.jarne Stroutstrup", "C. Jhon Carmack","D.Mark zuckerberg"},
                               {"A.C ", "b.C+" , "c.C--","D.C#"},
                               {"A.yes","B.no","C.sometimes","D.whats earth"}};

    char answerkey[] = {'C','B','A','B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score; 

    for(int i = 0 ; i < size ; i++ ){
        std::cout <<"***********"<<'\n';
        std::cout <<questions[i]<<'\n';
        std::cout <<"***********"<<'\n';

        for(int j = 0 ;j <sizeof(options[i])/sizeof(options[i][0]); j++ ){
           std::cout << options[i][j]<<'\n';
        }

        std::cin >>guess;
        guess = toupper(guess);

        if(guess == answerkey[i])
        {
        std::cout << "Correct\n";
        score++;
        }
        else{
           std::cout <<"Wrong\n"; 
           std::cout <<"Answer: " << answerkey[i] << '\n';
        }
    } 
    std::cout <<"***********"<<'\n'; 
    std::cout <<"** RESULTS **\n" ; 
    std::cout <<"***********"<<'\n'; 
    std::cout << "Correct Quesses: "<< score << '\n';
    std::cout << "# of questions: "<<size <<'\n';
    std::cout << "SCORE: "<<(score/(double)size)*100<<" %";            

    return 0;
}