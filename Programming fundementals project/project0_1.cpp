#include <iostream>
#include <string> // to handle string variables
#include <thread>  // For creating delays
  // For time-related functions(seconds)
#include <cstdlib> // For executing system commands
using namespace std;

// Function prototypes
// defining the available events and payment methods.
void wedding();
void concert();
void formalparty();
void payment();
bool isValidCreditCard(string cardNumber);

int main(){

int event;
        // Display main menu
    cout << "************************\n";
    cout << "Event management program\n";
    cout << "************************\n";
    cout << "Enter a number to book your event: \n";
    cout << "1) Wedding\n";
    cout << "2) Concert\n";
    cout << "3) Formal party\n";
    cout << "4) Exit\n";
    cin >> event;

    // Clear input errors and ignore leftover input in the buffer
    cin.clear();
    cin.ignore();

    // Handle user's choice using a switch statement
    switch(event){
        case 1: 
        wedding();      // calling wedding function
                break;
        case 2: ;
        concert();      // calling concert function
                break;
        case 3: ;
        formalparty();  // calling Formal party function
                break;
        case 4: cout << "Thanks for visiting!\n";       // Exit
                break;
        default: cout << "Invalid choice\n";    // for invalid inputs
        }
return 0;
}

void wedding(){
        /*Handles Wedding details, asks the user to input
        the time and date they need the event to occure.
        then displays a menue of all the venues available
        and last things last, prompts the user to pick a
        package and proceeds to payment. */

string time;
string date;

cout << "************************\n";
cout << "enter wedding details:- \n";

cout << "1. time : ";
getline(cin >> ws, time);
cout << "the time you chose " << time << '\n' ;

cout << "2. date : ";

getline(cin >> ws , date);

cout << date << " is the date scheduled\n";
int venue;
do{
cout << "************************\n";
cout << "Enter a venue number (1-3):- \n";
cout << "1. Narcissus wedding halls\n";
cout << "2. Jasmine wedding halls\n";
cout << "3. Violet wedding halls\n";
cin >> venue ;

// array stores the accomodation of 3 wedding halls
int acc[3] = {200, 350, 250};
char package ;

switch(venue){
        case 1 :
           do{
                cout << "Enter your choice either S(Silver) or G(Gold): ";
                cin >> package;
                if(package == 'S' || package == 's'){
                acc[0];
                cout << "Your accomodation will be " << acc[0] << " Seats and Your price range 600 - 999\n";
                }
                else if(package == 'G' || package == 'g'){
                cout << "Your accomodation will be " << acc[0] << " Seats with services and Your price range 999 - 1300\n";
                }
           }while(package != 'g' && package != 'G' && package != 's' && package != 'S');
                break;
        case 2 :
            do{
                cout << "Enter your choice either S(Silver) or G(Gold): ";
                cin >> package;
                if(package == 'S' || package == 's'){
                acc[1];
                cout << "The accomodation will be " << acc[1] << " Seats and Your price range 600 - 999\n";
                }
                else if(package == 'G' || package == 'g'){
                cout << "The accomodation will be " << acc[1] << " Seats with services and Your price range 999 - 1300\n";
                }
             }while(package != 'g' && package != 'G' && package != 's' && package != 'S'); 
                break;
        case 3 :
            do{
                cout << "Enter your choice either S(Silver) or G(Gold): ";
                cin >> package;
                if(package == 'S' || package == 's'){
                acc[2];
                cout << "The accomodation will be " << acc[2] << " Seats and Your price range 600 - 999\n";
                }
                else if(package == 'G' || package == 'g'){
                cout << "The accomodation will be " << acc[2] << " Seats with services and Your price range 999 - 1300\n";
                }
            }while(package != 'g' && package != 'G' && package != 's' && package != 'S');    
                break;
        default: 
                cout << "Sorry! This venue is not available\n";
                break;
        }
        }while(venue > 3 || venue < 1);
        payment();
}
// Handles Concert details (same concept as the wedding function)
void concert(){
        string time;
        string date;
        cout << "Please enter concert details as following:- \n";
        cout << "1- Concert time: ";
        getline(cin >> ws, time);
        cout << "Scheduled time for " << time;

        cout << "\n2- Concert date: ";
        getline(cin >> ws, date);
        cout << "Scheduled date for " << date << '\n';

        int venue;
        do{
        cout << "Please pick a venue based on numbers (1-3):- \n";
        cout << "1. White Hall\n";
        cout << "2. The Cultural Palace Theater\n";
        cout << "3. Odeon Theater\n";
        cin >> venue ;

        // Array to store accommodation capacities for the wedding halls
        int acc[3] = {1290, 6000, 4500};
 
        switch(venue){
                case 1 : 
                        cout << "The accomodation of this venue is " << acc[0] << " Seats and the price range is 999 - 1399\n";
                        cout << "Depending on added services\n";
                break;
                case 2 :
                        cout << "The accomodation of this venue is " << acc[1] << " Seats and the price range is 2399 - 2699\n";
                        cout << "Depending on added services\n";
                break;        
                case 3 :
                        cout << "The accomodation of this venue is " << acc[2] << " Seats and the price range is 1999 - 2399\n";
                        cout << "Depending on added services\n";
                default: 
                        cout << "Sorry! This venue is not available\n";
                break;                
                }
        }while(venue > 3 || venue < 1);
                payment();
}
// Handles Formal party details (same concept as previous functions)
void formalparty(){
        string date ;
        string time ;
        cout << "Enter the date of the formalparty: ";
        getline(cin, date);

        cout << "Enter the time of the formalparty: "; 
        getline(cin, time);

        int venue;
        
        do{
        cout << "Please pick a venue based on numbers (1-3):- \n";
        cout << "1. Royal Hotel\n";
        cout << "2. Four Seasons Hotel\n";
        cout << "3. The Ritz-Carlton Hotel\n";
        cin >> venue ;
        // Array to store guest capacities for the formal party venues
        int guestnum[3] = {300, 150, 120};

        switch(venue){
                case 1 : 
                        cout << " You have selected the Royal Hotel.\n";
                        cout << "The accomodation of this venue is " << guestnum[0] << " Seats and the price range is 50000 - 75000\n";
                        cout << "Available services include catering , live music , and event planning.\n";
                break;
                case 2 :
                        cout << "The accomodation of this venue is " << guestnum[1] << " Seats and the price range is 15000 - 50000\n";
                        cout << "Available services include catering , luxury dining , and private suites.\n";
                break;        
                case 3 :
                        cout << "The accomodation of this venue is " << guestnum[2] << " Seats and the price range is 10000 - 30000\n";
                        cout << "Available services include gourmet catering , premium sound system , and event coordination.\n";    
                default: 
                        cout << "Sorry! This venue is not available\n";
                break;            
            }
        }while(venue > 3 || venue < 1);       
        payment();
}
// Function to handle payment options and processing
void payment(){
    cout << "Select a payment method by choosing a number (1-3): \n";
    cout << "1. PayPal\n";
    cout << "2. Credit/debit card\n";
    cout << "3. Cash\n";
  
    int pay; // stores the payment method.
    string Email; //PayPal Email.
    string pass; //PayPal Password.
    string Name; //Cardholder Name.
    string Date; //Credit card expiry date.
    string Address; //Credit card Address.
    int CVV; //Credit card security number.
    cin >> pay;
    string cardNumber;

    switch(pay){
        case 1 :
                cout << "Enter your email: \t";
                cin >> Email;
                cout << "\nEnter password: \t";
                cin >> pass;
                cout << "Checking information...\n";

                // Simulate delay for payment processing
                this_thread::sleep_for(chrono::seconds(2));
                cout << "Payment done\n";
                cout << "Thank you for your purchase!";
                break;
        case 2 :
                // Handle Credit/Debit card payment
                cout << "Enter the credit card number: ";
                cin.ignore();
                getline(cin , cardNumber);

                // Validate credit card number using Luhn Algorithm
                if(isValidCreditCard(cardNumber)){
                        cout << "The credit card number is valid.\n";
                        cout << "Enter the following:- \n";
                        cout << "Cardholder Name:- ";
                        getline(cin >> ws , Name);
                        cout << "\n\t Expiry date:- ";
                        getline(cin >> ws , Date);
                        cout << "\n\t CVV:- ";
                        cin >> CVV;
                        cout << "\n\t Address:- ";
                        getline(cin >> ws , Address);

                        // Simulate delay for information validation
                        this_thread::sleep_for(chrono::seconds(1));
                        cout << "Checking your information\n";
                        this_thread::sleep_for(chrono::seconds(3));
                        cout << "Thank you for your purchase!";
                } else{
                        cout << "The credit card number is invalid.\n";
                }
                break;
        case 3 :
                // Handle Cash payment
        string URL = "https://maps.app.goo.gl/Uvptv4Ai6R6LiCtS9"; // Location URL
        string command = "start " + URL;
                cout << "Please wait to get Location URL";
                this_thread::sleep_for(chrono::seconds(2));
                // this function opens the url in browser using system() built-in function
                system(command.c_str());
                break;
    }
}
/* a credit card validation function
 using Luhn Algorithm.
 this algorithm reverses the card number from right to left
 then skips the first digit, and then multiplies the digit
 after it by 2, if the result is a 2 digit number (ex. 12, 15...) we
 subtract 9 and if its not we go on to the next digit
 finally we compute the sum of these numbers, if sum modulus 10 is 0
 it passed the validation test.*/
bool isValidCreditCard(string cardNumber){
    int length = cardNumber.length();
    int sum = 0;
    bool isSecondDigit = false;

    for (int i = length - 1; i >= 0; i--){
        int digit = cardNumber[i] - '0'; 
        
        if (isSecondDigit){
            digit *= 2;
            if (digit > 9){
                digit -= 9;
            }
        }
        sum += digit;

        isSecondDigit = !isSecondDigit;
    }
    return (sum % 10 == 0);
}