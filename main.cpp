//Author: Natalie Dinin
#include <iostream>
#include <fstream>
using namespace std;

int main()
{

  int red = 0;
  int green = 0;
  int blue = 0;
  int red2 = 0;
  int green2 = 0;
  int blue2 = 0;
  int red3 = 0;
  int green3 = 0;
  int blue3 = 0; 
  int red4 = 0;
  int green4 = 0;
  int blue4 = 0;
  int red5 = 0;
  int green5 = 0;
  int blue5 = 0;
  int red6 = 0;
  int green6 = 0;
  int blue6 = 0;

  fstream reader;
  string filename;
  string affirmative;
  string proceed;


  cout << "Enter a RED color value (Must be between 0 and 255)\n";
 cin >> red;
while (red < 0 || red > 255) {
    
   cout << "Sorry, that number is not in the specified range. \n";
   cout << "Please re-enter a RED color value (Must be between 0 and 255)\n";
   cin >> red;
  
  } 



  cout << "Enter a GREEN color value (Must be between 0 and 255)\n";
  cin >> green;

  while (green < 0 || green > 255){
    cout << "Sorry, that number is not in the specified range. \n";
   cout << "Please re-enter a GREEN color value (Must be between 0 and 255)\n";
   cin >> green;
  }

  cout << "Enter a BLUE color value (Must be between 0 and 255)\n";
  cin >> blue;
   while (blue < 0 || blue > 255) {
    cout << "Sorry, that number is not in the specified range. \n";
   cout << "Please re-enter a BLUE color value (Must be between 0 and 255)\n";
   cin >> blue;
  }

  // to do: figure out how to take these inputs and put them in a file

  cout << "Please enter a name for the file you will be storing the rgb values in:\n";
  cin >> filename;

  reader.open(filename, ios::out);
  ofstream outfile;
  outfile.open(filename);

  cout << "Writing to the file..." << endl << endl;

  outfile << red << endl;
  outfile << green << endl;
  outfile << blue << endl;
  outfile.close();


  cout << "Would you like to read from the file? (y/n)\n";

  cin >> proceed;
  if (proceed == "y" || proceed == "Y"){

  cout << "Reading from file..." << endl << endl;

   ifstream infile; 
   infile.open(filename);
    infile >> red >> green >> blue;

  
   cout << "rgb(" << red << "," << green << "," << blue << ")" << endl << endl; 

  infile.close();
  }
  cout << "Now that it has been identified which color you would like as a base color, a list of five more colors that do not have problematic color combinations can be generated." << endl << endl;

  cout << "Would you like to add five more colors to " << filename << "? (Enter y for yes and n for no)" << endl << endl;

  cin >> affirmative;

  if (affirmative == "y" || affirmative == "Y"){

    reader.open(filename, ios::out);
    ofstream outfile;
    outfile.open(filename);

     outfile << red2 << endl;
     outfile << green2 << endl;
     outfile << blue2 << endl;
     outfile << red3 << endl;
     outfile << green3 << endl;
     outfile << blue3 << endl;
     outfile << red4 << endl;
     outfile << green4 << endl;
     outfile << blue4 << endl;
     outfile << red5 << endl;
     outfile << green5 << endl;
     outfile << blue5 << endl;
     outfile << red6 << endl;
     outfile << green6 << endl;
     outfile << blue6 << endl;     

     outfile.close();

  }

  return 0;
}
