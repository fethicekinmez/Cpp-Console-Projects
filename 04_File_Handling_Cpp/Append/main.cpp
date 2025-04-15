#include <iostream>
#include <fstream>

using namespace std;

int main(){

    fstream myFile;
    myFile.open("text.txt", ios::out); // ios::out is used to create a file if it does not exist
    if(myFile.is_open()){
        myFile << "First Line" << endl;
        myFile << "Second Line" << endl;
        myFile << "Third Line" << endl;
    }
    myFile.close();

    myFile.open("text.txt", ios::app); // ios::app is used to append data to the file
    if(myFile.is_open()){
        myFile << "Appended Line" << endl;
    }
    myFile.close();
    

    return 0;
}

