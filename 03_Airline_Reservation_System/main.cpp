#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu();

class Management{
public:
    Management(){
        mainMenu();
    }

};

class Details{
public: 
    static string name, gender;
    int age, phone_num;
    string address;
    static int customer_id;
    char arr[100];

    void information(){
        cout << "/nEnter the custımer id: ";
        cin >> customer_id;
        cout << "/nEnter the name: ";
        cin >> name;
        cout << "/nEnter the age: ";
        cin >> age; 
        cout << "/nEnter the address: ";
        cin >> address; 
        cout << "/nEnter the gender: ";
        cin >> gender; 
        cout << "\n Your details are saved!" << endl;

    }
};

int Details::customer_id;
string Details::name;
string Details::gender;

class Registration{
public:
    static int choice;
    int choice1, back_choice;
    static float charges;

    void flight(){
        string flightN[] = {"Dubai", "UK", "USA", "Turkey", "Canada", "Australia", "France"};
        for(size_t i = 0; i < 7; i++){
            cout << (i+1) << ". flight to " << flightN[i] << endl;
        }
        cout << "\nWELCOME TO THE AIRLINES!!" << endl;
        cout << "Enter your flight destination number: ";
        cin >> choice;
    }
};

class Ticket{

};

void mainMenu(){
    int lchoice, schoice, back_choice;
    cout << "\t\t Airline Management System \n\n" << endl;
    cout << "\t----------Main Menu--------------" << endl;
    cout << "\t| Press 1 to add customer details " << endl;
    cout << "\t| Press 2 for flight registration " << endl;
    cout << "\t| Press 3 for tickets & charges   " << endl;
    cout << "\t| Press 4 to Exit               \n" << endl;
    cout << "\t| Enter your choice:  ";
    cin >> lchoice;

    Details d;
    Registration r;
    Ticket t;

    switch (lchoice)
    {
    case 1:
        {
            cout << "________________Customers_________________\n" <<  endl;
            d.information();

            cout << "Press any key to go back to main menu ";
            cin >> back_choice;
            mainMenu();
        
        }
        break;
    case 2:
        {
            cout << "________________Book a Flight_______________\n" <<  endl;
            r.flight();
        }
        break;
    case 3:
        {
            cout << "________________Get Your Ticket_______________\n" <<  endl;
            t.Bill();
            cout << "Your ticket is printed" << endl;
            t.Display();

            cout << "Press any key to go back to main menu ";
            cin >> back_choice;
            mainMenu();

        }
        break;
    case 4:
        {
            cout << "THANKS FOR USING THE FLIGHT MANAGEMENT SYSTEM, SEE YOU SOON!n" <<  endl;
        }
        break;
    
    default:
        {
            cout << "Invalid Choice!!" <<  endl;
            mainMenu();
        }
        break;
    }


}

int main(){
    Management Mobj;

    return 0;
}