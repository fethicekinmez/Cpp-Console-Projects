#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string s1 = "Lemon and lemonade";

    ofstream file("file.txt"); // Create a file
    file << s1; // Write to file
    file.close(); // Close the file

    ifstream file2("file.txt"); // Open the file
    string s2;
    while (file2 >> s2)  
    {
        cout << s2 << endl;
    }
    
    file2.close();

    return 0;
}