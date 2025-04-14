#include <iostream>
#include <fstream>

using namespace std;

int main(){

    fstream myFile;
    myFile.open("text.txt", ios::out);
    if(myFile.is_open()){
        myFile << "First Line" << endl;
        myFile << "Second Line" << endl;
        myFile << "Third Line" << endl;
    }
    myFile.close();

    myFile.open("text.txt", ios::app);
    if(myFile.is_open()){
        myFile << "Appended Line" << endl;
    }
    myFile.close();
    

    return 0;
}

