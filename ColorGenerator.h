#ifndef COLORGENERATOR_H
#define COLORGENERATOR_H
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Color {

    int red;
    int green;
    int blue;

};

class ColorGenerator {

  private:

    //BaseColor
  
    Color outputColors[5];
    //Color baseColor;

  public:

    ColorGenerator();

    void writeToFile(string filename, Color baseColor);
    void displayColors(string proceed, string filename, Color baseColor);
    void generateOutputColors(Color baseColor);

    bool checkRGBColor(int &colorValue);
    
};





#endif