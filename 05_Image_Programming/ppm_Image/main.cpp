#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream image;
    image.open("image.ppm");
    if(image.is_open()){
        // place header info
        image << "P3" << endl;
        image << "250 250" << endl;
        image << "255" << endl;

        for(int i=0; i<250; i++){
            for(int j=0; j<250; j++){
                //image << j << " " << j << " " << j << endl;
                image << (i*j) % 255 << " " << j << " " << j << endl;
            }
        }
    }
    image.close();




    return 0;
}