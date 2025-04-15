#include <iostream>
#include <fstream>

using namespace std;

int main(){

    fstream myFile;
    myFile.open("file.txt", ios::out); // Open the file in write mode
    if(myFile.is_open()){
        cout << "writing into file..." << endl;
        myFile << "Hello" << endl;
        myFile << "Second Line\n";
        myFile << "Third Line";
    }
    myFile.close();

    return 0;
}