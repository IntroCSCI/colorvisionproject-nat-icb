//Author: Natalie Dinin
#include <iostream>
#include "ColorGenerator.h"

using namespace std;

int main() {

	Color baseColor;
	

	ColorGenerator myColorGenerator = ColorGenerator();
	cout << "Please enter your red rgb value (Must be between 0 and 255)" << endl;
	
	do {


		cin >> baseColor.red;

	} while (myColorGenerator.checkRGBColor(baseColor.red));

	cout << "Please enter your green rgb value (Must be between 0 and 255)" << endl;

	do {

		cin >> baseColor.green;

	} while (myColorGenerator.checkRGBColor(baseColor.green));

	cout << "Please enter your blue rgb value (Must be between 0 and 255)" << endl;

  	do {

		cin >> baseColor.blue;

	} while (myColorGenerator.checkRGBColor(baseColor.blue));

  cout << "Please enter a name for the file you will be storing the rgb values in:\n" << endl;
  string filename;
	cin >> filename;

  cout << "Now that it has been identified which color you would like as a base color, a list of five more colors that do not have problematic color combinations can be generated." << endl << endl;

  cout << "Would you like to add five more colors to " << filename << "? (y/n)" << endl << endl;
  string affirmative;
  cin >> affirmative;

  if(affirmative == "y" || affirmative == "Y"){
	  myColorGenerator.generateOutputColors(baseColor);

	  myColorGenerator.writeToFile(filename,baseColor);

    string proceed;

	  myColorGenerator.displayColors(proceed,filename,baseColor);
  }


  

	return 0;

}