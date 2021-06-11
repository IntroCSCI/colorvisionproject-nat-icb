# ColorVision Prototype Project

## Description

My program asks the use to provide 3 numbers ranged from 0-255 to store as an rgb value for the base color. It stores these values in a file the user names. It prompts the user whether they want to read from the file. It then asks the user whether they want to add 5 more colors to the file.

### v0.2 Updates

My program now adds 5 more colors to the file the user specifies based on what range the initial color is part of. It then prints out the rgb values for all 6 colors in the console.

### v1.0 Updates

My program now involves a color class complete with a header file and an implementation file. In this class, I have implemented 4 member functions and 1 member variable, all of which encapsulate the task of generating nonproblematic color combinations.


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
Please enter your red rgb value (Must be between 0 and 255)
20
Please enter your green rgb value (Must be between 0 and 255)
100
Please enter your blue rgb value (Must be between 0 and 255)
0
Please enter a name for the file you will be storing the rgb values in:

color.svg
Now that it has been identified which color you would like as a base color, a list of five more colors that do not have problematic color combinations can be generated.

Would you like to add five more colors to color.svg? (y/n)

y
Writing to the file....
Would you like to read from the file? (y/n)
y
Printing out all six nonproblematic colors...


rgb1(20,100,0)
rgb2(102,46,0)
rgb3(75,155,22)
rgb4(145,123,170)
rgb5(200,108,250)
rgb6(234,248,199)
```

## C++ Guide

### Variables and Data Types

 
I created a struct data type called Color, which stores the 3 integers that make up a color with respect to rgb values. I used a Color variable called baseColor to store the rgb values that the user inputs.
 
I also used an integer variable to store the sum of the 3 rgb values that represent the color. I needed to store a non decimal number so I decided the integer data type worked best for this problem.
 
 
I used the string variable to store the filename that the user chooses. Since that will always be multiple characters, the string data type worked best. I also used a string variable to store the response the user gives when asked whether they want to proceed two times in the program.
 
I used the fstream variable type in order to use file input and output.
 
I used 1 array of 5 Color structs each composed of 3 integers to store the rgb values for the 5 colors my program generates. Using an array of Color structs made sense because I needed to keep track of a sizable amount of numbers with a set size. Storing the values in Color structs in an array kept the numbers organized nicely.
 
I have a variable of type ColorGenerator called myColorGenerator in order to create an instance of the class I created to create my output colors and write them to the file.

### Console Input and Output

I used a lot of console input and output in my program. All of the words displayed when you run the program are displayed because I used cout statements to make sure the user could read them. I needed to use cin statements whenever collecting information from the user. An example of both of these is when I ask
```
Please enter your red rgb value (Must be between 0 and 255)
```
and the user enters an integer stored in baseColor variable’s red int field that represents the red rgb value.



### Decisions

I used an if statement when I asked whether the user wanted to read the information from their file. This was an effective use of a decision construct because it lets the user know that the information they entered was saved to a file.
 
I used an if statement when I asked the user if they would like to add five more colors to their file. I used a decision construct here to give the user an option whether they wanted to continue using the program to generate the features it is supposed to do or whether they would like to quit the program.
 
In my GenerateColors function, I used an if statement and 5 else if statements to determine which colors should be added to the file along with the color the user input. I used a decision construct here because I needed one of 6 scenarios to happen, depending on the range of the sum of the rgb value the user input.

### Iteration

I used three do-while loops when I was collecting the number values for the rgb value of the base color. These loops account for the mistake of the user entering a number outside the specified range by passing the value to a function that checks if they entered a value between 0 and 255, and will ask the user to enter a new number until they choose a number in the correct range for the respective rgb value the do-while loop governs. This function uses pass by reference parameters so it may reset the value of the Color’s rgb value to its default value if it is not in the correct range, and returns false so that it breaks the do-while loop if correct. This is an effective use of a loop because it will only run if the specifications in the condition hold true. This would not be the case if I had used a do while loop for example.
 
I used a for loop when I was extracting information from my arrays to put them in the file in a clear format showing that they are rgb values of 5 different colors. A for loop was most appropriate because I had a set number of times I wanted to repeat an action.
 
I used another for loop within the constructor for my class in order to set all the initial values for my output color array to 0 as a default. 

### File Input and Output

I used file input and output effectively in my program. The values I ask for for the base color are stored in a file the user names themselves. The rgb values my program generates are also stored in the same file that the user names themselves. To cover my bases, I also have made my program read from that file to make sure the information was stored in it correctly. I remember to open and close the file each time I need to interact with it.  


### Arrays/Vectors

I use one array of type Color which I specified in my .h file in my program to keep the red, green, and blue color values that my program generates in an orderly fashion. I call upon specific elements of each array when I need to organize them as rgb values. An array was a more fitting choice than a vector because the set of numbers I am working with is statically sized.

### Functions

My first function, CheckRGBValue, checks the value the user entered to see if it is a number between 0 and 255. If the number they specify is not in that range, then CheckRGBValue will return true, and the program will continue asking them until they enter a value in that range as checkRGBValue is the condition set in the do-while loop in main.cpp. The function CheckRGBValue only requires an int to test whether it is within range. This is necessary in order to make the function flexible enough to use 3 times. This function uses pass-by-reference because it sets the value of the int specified in the color struct back to its default value of zero if it is incorrect. This function is unique because it works for my specific project.
 
My second function, GenerateColors, modifies my output array so that it works with the color the user entered based on the range the sum of the rgb values the user entered. Given 6 possible ranges the sum can fall under, I use 6 decision constructs (one if and five else ifs) to add rgb values whose sum is in the other 5 ranges. This function modifies the member variable outputColors that my function already had access to so it did not need any parameters. I used a void return type because this function didn't need to return anything. This function is unique because it works for my specific project.
 
My third function, writeToFile writes the output of my program, the five colors that are compatible with what the user entered, into a file specified by the user. This function takes in a string parameter called filename that is the name of the file the user wishes the output be sent to. This function returns void as it only modifies the text file it writes out to.
 
My fourth function displayColors, displays the colors written to the file from the writeToFile function. It accepts 3 parameters, the baseColor, so that it can output it, a boolean called proceed, that is used to determine whether the function should run or not, and a string filename that specifies which file the function should read from.

### Classes

I have created a class called ColorGenerator I use in order to encapsulate all the functions and data needed for the task of creating the colors my function is designed to output according to what is compatible with the color the user entered. It has four member functions and one member variable. The four member functions were already described under functions, as was the member variable under variables. They include the checkRGBValue that returns a boolean related to whether the user input a number from the correct range used to loop until the user inputs a correct value. The generateColors function that generates colors compatible with the color that the user entered into the program. The writeToFile member function that writes the output of the program (compatible colors) to a file the user specified, and a displayColors member function that displays the output of the program written on one of the aforementioned files. 
 
The member variable is a private variable called outputColors, an array of type Color, a struct that I created in the .h file in order to store the three rgb values that relate to one color, in order to neatly store all the colors I will require to be output from my program. I find this to be an effective use of classes as I have successfully encapsulated all the functions, data, and procedures for the task of generating and outputting compatible colors that the user inputs into my program. Information hiding is exemplified in that the outputColors member variable is private because it’s only meant to be used by the public member function but not by the main.cpp file.
