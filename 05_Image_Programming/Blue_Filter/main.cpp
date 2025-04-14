#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){

    ifstream image;
    ofstream newImage;

    image.open("sample.ppm");
    newImage.open("newImage.ppm");

    // copy header info
    string type = "", width = "", height = "", RGB = "";
    image >> type;
    image >> width;
    image >> height;
    image >> RGB;

    cout << "Type: " << type << endl
         << "Width: " << width << endl
         << "Height: " << height << endl
         << "RGB: " << RGB << endl;

    newImage << type << endl;
    newImage << width << " " << height << endl;
    newImage << RGB << endl;

    string red="", green="", blue="";
    int r=0, g=0, b=0;
    while(!image.eof()){
        image >> red;
        image >> green;
        image >> blue;

        stringstream redstream(red);
        redstream >> r;
        stringstream greenstream(green);
        greenstream >> g;
        stringstream bluestream(blue);
        bluestream >> b;

        if(b + 50 >= 255){
            b = 255;
        }
        else{
            b += 50;
        }

        newImage << r << " " << g << " " << b << endl;
    }

    image.close();
    newImage.close();
    return 0;
}

// Convert P6 PPM to P3 PPM
// https://thomasebsmith.github.io/ppm-converter/