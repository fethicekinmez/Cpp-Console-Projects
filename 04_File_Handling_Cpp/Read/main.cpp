#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    fstream myFile;
    myFile.open("text.txt", ios::in); // Open the file in read mode

    if(myFile.is_open()){
        string line;
        while(getline(myFile, line)){
            cout << line << endl;
        }
        myFile.close();
    }

    return 0;
}