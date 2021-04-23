//Author: Natalie Dinin
#include <iostream>
#include <fstream>
using namespace std;

int CheckRGBValue(string);
void GenerateColors(int, int (&new_red)[5], int (&new_green)[5], int (&new_blue)[5]);

int main(){

  int red = 0;
  int green = 0;
  int blue = 0;
  string RedIndicator = "RED";
  string GreenIndicator = "GREEN";
  string BlueIndicator = "BLUE";

  red = CheckRGBValue(RedIndicator);
  green = CheckRGBValue(GreenIndicator);
  blue = CheckRGBValue(BlueIndicator);

  ofstream reader;
  string filename;
  
  cout << "Please enter a name for the file you will be storing the rgb values in:\n";
  cin >> filename;

  reader.open(filename);

  cout << "Writing to the file..." << endl << endl;
  reader << "rgb1(" << red << ",";
  reader << green << ",";
  reader << blue << ")" << endl; 

  reader.close();


  cout << "Would you like to read from the file? (y/n)\n";
  string proceed;
  cin >> proceed;
  if (proceed == "y" || proceed == "Y"){
    cout << "Reading from file..." << endl << endl;
    string line;
    ifstream infile; 
    infile.open(filename);
    getline(infile, line);
    cout << line << endl;
    infile.close();
  }

  cout << "Now that it has been identified which color you would like as a base color, a list of five more colors that do not have problematic color combinations can be generated." << endl << endl;

  cout << "Would you like to add five more colors to " << filename << "? (y/n)" << endl << endl;
  string affirmative;
  cin >> affirmative;

  int new_red[5] = {0, 0, 0, 0, 0};
  int new_green[5] = {0, 0, 0, 0, 0};
  int new_blue[5] = {0, 0, 0, 0, 0};

  int sum = red + green + blue;
  
  //0-42    43-85  86-128  129-171 172-212 213-255
  
  //0-127  128-256 257-385 386-514 515-637 638-765

  GenerateColors(sum, new_red, new_green, new_blue);

  if (affirmative == "y" || affirmative == "Y"){

    reader.open(filename, ofstream::app);

    for(int i = 0; i < 5; i++){
      reader << "rgb" << i+2 << "(" << new_red[i] << ",";
      reader << new_green[i] << ",";
      reader << new_blue[i] << ")" << endl; 
      
    }     

    reader.close();

  }

  cout << "Printing out all six nonproblematic colors...\n";
  cout << "rgb1(" << red << ", ";
  cout << green << ", " << blue << ")\n";
  cout << "rgb2(" << new_red[0] << ", ";
  cout << new_green[0] << ", " << new_blue[0] << ")\n";
  cout << "rgb3(" << new_red[1] << ", ";
  cout << new_green[1] << ", " << new_blue[1] << ")\n";
  cout << "rgb4(" << new_red[2] << ", ";
  cout << new_green[2] << ", " << new_blue[2] << ")\n";
  cout << "rgb5(" << new_red[3] << ", ";
  cout << new_green[3] << ", " << new_blue[3] << ")\n";
  cout << "rgb6(" << new_red[4] << ", ";
  cout << new_green[4] << ", " << new_blue[4] << ")\n";

  return 0;
}

int CheckRGBValue(string colour){
  int temporary = 0;
  cout << "Enter a " << colour << " color value (Must be between 0 and 255)\n";
  cin >> temporary;

  while (temporary < 0 || temporary > 255){
    cout << "Sorry, that number is not in the specified range. \n";
    cout << "Please re-enter a " << colour << " color value (Must be between 0 and 255)\n";
    cin >> temporary;
  }
  return temporary;
}

void GenerateColors(int sum, int (&new_red)[5], int (&new_green)[5], int (&new_blue)[5]){
  
  //0-42    43-85  86-128  129-171 172-212 213-255
  
  //0-127  128-256 257-385 386-514 515-637 638-765

  if(sum >= 0 && sum <= 127){
    new_red[0] = 102;
    new_red[1] = 75;
    new_red[2] = 145;
    new_red[3] = 200;
    new_red[4] = 234;

    new_green[0] = 46;
    new_green[1] = 155;
    new_green[2] = 123;
    new_green[3] = 108;
    new_green[4] = 248;

    new_blue[0] = 0;
    new_blue[1] = 22;
    new_blue[2] = 170;
    new_blue[3] = 250;
    new_blue[4] = 199;
   
  }
  else if(sum >= 128 && sum <= 256){
    new_red[0] = 0;
    new_red[1] = 75;
    new_red[2] = 145;
    new_red[3] = 200;
    new_red[4] = 234;

    new_green[0] = 0;
    new_green[1] = 155;
    new_green[2] = 123;
    new_green[3] = 108;
    new_green[4] = 248;

    new_blue[0] = 0;
    new_blue[1] = 22;
    new_blue[2] = 170;
    new_blue[3] = 250;
    new_blue[4] = 199;

  }
  else if(sum >= 257 && sum <= 385){
    new_red[0] = 0;
    new_red[1] = 102;
    new_red[2] = 145;
    new_red[3] = 200;
    new_red[4] = 234;

    new_green[0] = 0;
    new_green[1] = 46;
    new_green[2] = 123;
    new_green[3] = 108;
    new_green[4] = 248;

    new_blue[0] = 0;
    new_blue[1] = 0;
    new_blue[2] = 170;
    new_blue[3] = 250;
    new_blue[4] = 199;

  }
  else if(sum >= 386 && sum <= 514){
    new_red[0] = 0;
    new_red[1] = 102;
    new_red[2] = 75;
    new_red[3] = 200;
    new_red[4] = 234;

    new_green[0] = 0;
    new_green[1] = 46;
    new_green[2] = 155;
    new_green[3] = 108;
    new_green[4] = 248;

    new_blue[0] = 0;
    new_blue[1] = 0;
    new_blue[2] = 22;
    new_blue[3] = 250;
    new_blue[4] = 199;

  }
  else if(sum >= 515 && sum <= 637){
    new_red[0] = 0;
    new_red[1] = 102;
    new_red[2] = 75;
    new_red[3] = 145;
    new_red[4] = 234;

    new_green[0] = 0;
    new_green[1] = 46;
    new_green[2] = 155;
    new_green[3] = 123;
    new_green[4] = 248;

    new_blue[0] = 0;
    new_blue[1] = 0;
    new_blue[2] = 22;
    new_blue[3] = 170;
    new_blue[4] = 199;

  }
  else if(sum >= 638 && sum <= 765){
    new_red[0] = 0;
    new_red[1] = 102;
    new_red[2] = 75;
    new_red[3] = 145;
    new_red[4] = 200;

    new_green[0] = 0;
    new_green[1] = 46;
    new_green[2] = 155;
    new_green[3] = 123;
    new_green[4] = 108;

    new_blue[0] = 0;
    new_blue[1] = 0;
    new_blue[2] = 22;
    new_blue[3] = 170;
    new_blue[4] = 250;

  }
  
}

