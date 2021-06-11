#include <iostream>
#include <fstream>
#include "ColorGenerator.h"

using namespace std;

ColorGenerator::ColorGenerator() {


	//Color myoutputColors[5] = { (0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0) };
	for (int i = 0; i < 5; i++) {

		outputColors[i].red = 0;
		outputColors[i].green = 0;
		outputColors[i].blue = 0;

	}

}


bool ColorGenerator::checkRGBColor(int &colorValue){//returns true if color is NOT valid

	bool returnValue = false;

	if (colorValue < 0 || colorValue > 255) {

    colorValue = 0;
		cout << "Sorry, that number is not in the specified range.\n";
    cout << "Please re-enter a number between 0 and 255. \n" << endl;
		returnValue = true;

	}
	

	return returnValue;

}

void ColorGenerator::generateOutputColors(Color baseColor) {

	string output;

	int sum = baseColor.red + baseColor.green + baseColor.blue;

	/*TODO: IMPLEMENT NATALIES CODE*/

	
	//void GenerateColors(int sum, int (&new_red)[5], int (&new_green)[5], int (&new_blue)[5]){
  
  //0-42    43-85  86-128  129-171 172-212 213-255
  
  //0-127  128-256 257-385 386-514 515-637 638-765

  if(sum >= 0 && sum <= 127){
    outputColors[0].red = 102;
    outputColors[1].red = 75;
    outputColors[2].red = 145;
    outputColors[3].red = 200;
    outputColors[4].red = 234;

    outputColors[0].green = 46;
    outputColors[1].green = 155;
    outputColors[2].green = 123;
    outputColors[3].green = 108;
    outputColors[4].green = 248;

    outputColors[0].blue = 0;
    outputColors[1].blue = 22;
    outputColors[2].blue = 170;
    outputColors[3].blue = 250;
    outputColors[4].blue = 199;
   
  }
  else if(sum >= 128 && sum <= 256){
    outputColors[0].red = 0;
    outputColors[1].red = 75;
    outputColors[2].red = 145;
    outputColors[3].red = 200;
    outputColors[4].red = 234;

    outputColors[0].green = 0;
    outputColors[1].green = 155;
    outputColors[2].green = 123;
    outputColors[3].green = 108;
    outputColors[4].green = 248;

    outputColors[0].blue = 0;
    outputColors[1].blue = 22;
    outputColors[2].blue = 170;
    outputColors[3].blue = 250;
    outputColors[4].blue = 199;

  }
  else if(sum >= 257 && sum <= 385){
    outputColors[0].red = 0;
    outputColors[1].red = 102;
    outputColors[2].red = 145;
    outputColors[3].red = 200;
    outputColors[4].red = 234;

   //outputColors[0].green=0;
    outputColors[0].green = 0;
    outputColors[1].green = 46;
    outputColors[2].green = 123;
    outputColors[3].green = 108;
    outputColors[4].green = 248;

    outputColors[0].blue = 0;
    outputColors[1].blue = 0;
    outputColors[2].blue = 170;
    outputColors[3].blue = 250;
    outputColors[4].blue = 199;

  }
  else if(sum >= 386 && sum <= 514){
    outputColors[0].red = 0;
    outputColors[1].red = 102;
    outputColors[2].red = 75;
    outputColors[3].red = 200;
    outputColors[4].red = 234;

    outputColors[0].green = 0;
    outputColors[1].green = 46;
    outputColors[2].green = 155;
    outputColors[3].green = 108;
    outputColors[4].green = 248;

    outputColors[0].blue = 0;
    outputColors[1].blue = 0;
    outputColors[2].blue = 22;
    outputColors[3].blue = 250;
    outputColors[4].blue = 199;

  }
  else if(sum >= 515 && sum <= 637){
    outputColors[0].red = 0;
    outputColors[1].red = 102;
    outputColors[2].red = 75;
    outputColors[3].red = 145;
    outputColors[4].red = 234;

    outputColors[0].green = 0;
    outputColors[1].green = 46;
    outputColors[2].green = 155;
    outputColors[3].green = 123;
    outputColors[4].green = 248;

    outputColors[0].blue = 0;
    outputColors[1].blue = 0;
    outputColors[2].blue = 22;
    outputColors[3].blue = 170;
    outputColors[4].blue = 199;

  }
  else if(sum >= 638 && sum <= 765){
    outputColors[0].red = 0;
    outputColors[1].red = 102;
    outputColors[2].red = 75;
    outputColors[3].red = 145;
    outputColors[4].red = 200;

    outputColors[0].green = 0;
    outputColors[1].green = 46;
    outputColors[2].green = 155;
    outputColors[3].green = 123;
    outputColors[4].green = 108;

    outputColors[0].blue = 0;
    outputColors[1].blue = 0;
    outputColors[2].blue = 22;
    outputColors[3].blue = 170;
    outputColors[4].blue = 250;

  }
	


}

void ColorGenerator::writeToFile(string filename, Color baseColor) {

    ofstream reader;
    reader.open(filename);
    cout << "Writing to the file...." << endl;
    reader << "rgb1(" << baseColor.red << ",";
    reader << baseColor.green << "," << baseColor.blue << ")"<<endl;

    for (int i = 0; i < 5; i++) {

        reader << "rgb" << i + 2 << "(" << outputColors[i].red << ",";
        reader << outputColors[i].green << "," << outputColors[i].blue<<")" << endl;

    }

    reader.close();

}
void ColorGenerator::displayColors(string proceed, string filename, Color baseColor) {
    cout << "Would you like to read from the file? (y/n)\n";
    
   cin >> proceed;
    if (proceed == "y" || proceed == "Y"){
      cout << "Printing out all six nonproblematic colors...\n" << endl << endl;
      string line;
      ifstream infile; 
      infile.open(filename);
      getline(infile, line);
      cout << line << endl;
      infile.close();
    
  
      for (int i = 0; i < 5; i++) {

      cout << "rgb" << i + 2 << "(" << outputColors[i].red << ",";
      cout << outputColors[i].green << "," << outputColors[i].blue<<")" << endl;

     }
    }

}

