#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string s1 = "Lemon and lemonade";

    ofstream file("file.txt");
    file << s1;
    file.close();

    ifstream file2("file.txt");
    string s2;
    while (file2 >> s2)
    {
        cout << s2 << endl;
    }
    
    file2.close();

    return 0;
}