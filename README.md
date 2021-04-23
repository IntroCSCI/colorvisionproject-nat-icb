# ColorVision Prototype Project

## Description

My program asks the use to provide 3 numbers ranged from 0-255 to store as an rgb value for the base color. It stores these values in a file the user names. It prompts the user whether they want to read from the file. It then asks the user whether they want to add 5 more colors to the file.

### v0.2 Updates

My program now adds 5 more colors to the file the user specifies based on what range the initial color is part of. It then prints out the rgb values for all 6 colors in the console.

### v1.0 Updates

*Coming soon*


## Developer

Natalie Dinin

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
 g++ -std=c++11 *.cpp -o cvp; ./cvp
Enter a RED color value (Must be between 0 and 255)
20 
Enter a GREEN color value (Must be between 0 and 255)
100
Enter a BLUE color value (Must be between 0 and 255)
0
Please enter a name for the file you will be storing the rgb values in:
color.svg
Writing to the file...

Would you like to read from the file? (y/n)
y
Reading from file...

rgb1(20,100,0)
Now that it has been identified which color you would like as a base color, a list of five more colors that do not have problematic color combinations can be generated.

Would you like to add five more colors to color.svg? (y/n)

y
Printing out all six nonproblematic colors...
rgb1(20, 100, 0)
rgb2(102, 46, 0)
rgb3(75, 155, 22)
rgb4(145, 123, 170)
rgb5(200, 108, 250)
rgb6(234, 248, 199)
```

## C++ Guide

### Variables and Data Types

I used the integer variable to store my rgb values I collected from the user. I also used an integer variable to store the sum of the 3 rgb values. I needed to store a non decimal number so I decided the integer data type worked best for this problem.

I used the string variable to store the filename that the user chooses. Since that will always be multiple characters, the string data type worked best. I used the string variable type to replace text in my function that I use three times to check whether the user has input an integer between 0 and 255. I also used a string variable to store the response the user gives when asked whether they want to proceed at two times in the program. 

I used the fstream variable type because you can't do file input and output without it, at least to my knowledge. 

I used 3 arrays of length 5 to store the rgb values for the 5 colors my program generates. Using arrays made sense because I needed to keep track of a sizeable amount of numbers with a set size. Storing the values in arrays kept the numbers organzed nicely. 

### Console Input and Output

I used a lot of console input and output in my program. All of the words displayed when you run the program are displayed because I used cout statements to make sure the user could read them. I needed to use cin statements whenever collecting information from the user. An example of both of these is when I ask 
```
Enter a RED color value (Must be between 0 and 255)
```
and the user enters an integer stored in the variable "red."


### Decisions

I used an if statement when I asked whether the user wanted to read the information from their file. This was an effective use of a decision construct because it lets the user know that the information they entered was saved to a file. 

I used an if statement when I asked the user if they would like to add five more colors to their file. I used a decision construct here to give the user an option whether they wanted to continue using the program to generate the features it is supposed to do or whether they would like to quit the program.

In my GenerateColors function, I used an if statement and 5 else if statements to determine which colors should be added to the file along with the color the user input. I used a decision construct here because I needed one of 6 scenarios to happen, depending on the range of the sum of the rgb value the user input.

### Iteration

I used a while loop for when I was collecting the number values for the rgb value of the base color. This loop accounts for the mistake of the user entering a number outside the specified range and will ask the user to enter a new number until they choose a number in the correct range. This is an effective use of a loop because it will only run if the specifications in the condition hold true. This would not be the case if I had used a do while loop for example. 

I used a for loop when I was extracting information from my arrays to put them in the file in a clear format showing that they are rgb values of 5 different colors. A for loop was most appropriate because I had a set number of times I wanted to repeat an action. 

### File Input and Output

I used file input and output effectively in my program. The values I ask for for the base color are stored in a file the user names themselves. The rgb values my program generates are also stored in the same file that the user names themselves. To cover my bases, I also have made my program read from that file to make sure the information was stored in it correctly. I remember to open and close the file each time I need to interact with it.  


### Arrays/Vectors

I use 3 arrays in my program to keep the red, green, and blue color values that my program generates in an orderly fashion. I call upon specific elements of each array when I need to organize them as rgb values. An array was a more fitting choice than a vector because the set of numbers I am working with is statically sized. 

### Functions

My first function, CheckRGBValue, asks the user to enter a number between 0 and 255. If the number they spcify is not in that range, then the program will continue asking them until they enter a value in that range. This funtion then returns an integer value to be stored as the variable red, green, or blue depending on which call to the function the code is running through at the time. The function CheckRGBValue only requires a string to replace text in the cout statements in the function. This is necessary in order to make the function flexible enough to use 3 times. This function uses pass-by-value because it does not need to modify the string parameter. This function is unique because it works for my specific project.

My second function, GenerateColors, modifies 3 unique arrays so that they work with the color the user entered based on the range the sum of the rgb values the user entered. Given 6 possible ranges the sum can fall under, I use 6 decision constructs (one if and five else ifs) to add rgb values whose sum is in the other 5 ranges. This means I needed to pass-by-reference for the 3 arrays specified as parameters for the function, as I needed them to be permanently changed. I used a void return type because this function didnt need to return anything. This function is unique because it works for my specific project.


### Classes

*Coming in version 1.0*
