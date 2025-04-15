#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

    ofstream image;
    image.open("image.ppm");

    srand(time(0));

    if(image.is_open()){
        image << "P3" << endl;
        image << "250 250" << endl;
        image << "255" << endl;

        for(int i=0; i<255; i++){
            for(int j=0; j<255; j++){
                image << rand() % 255 << " " << rand() % 255 << " " << rand() % 255 << endl;
            }
        }
    }
    image.close();
    
    return 0;
}