#include <iostream>

int main(){

   int x ; //declaration
   /*intger*/
   x = 5;//assignment
   int y = 6 ;

   int sum = x + y;

   std::cout << y <<'\n' ;
   std::cout << x <<'\n' ;
   std::cout << sum <<'\n' ;

   //integer (whole number)
   int age = 18 ;
   int year = 2006;
   int days = 4.5 ;

   std::cout << days ;

   //double (number including decimal)
   double price = 19.99 ;
   double gpa = 2.5 ;
   double temp = 25.1 ;

   std::cout << price << '\n' ;

   //char(single character)
   char grade = 'A';
   char initial = 'B';
   char currency = '$';

   std::cout << initial << '\n';

   //boolean(true or false)
   bool student = false ;
   bool power = true ;
   bool forsale = true ; 

   //string(objects that represents a sequence of text)
   std::string name = "Ahmad";
   std::string day = "Tuesday" ;
   std::string food = "Falafel";
   std::string address = "123 fake st.";

   std::cout << "hello"<<" "<<name<<'\n';
   std::cout << "You are " << age << " years old";

    return 0;
}