# ColorVision Prototype Project

## Description

My program asks the use to provide 3 numbers ranged from 0-255 to store as an rgb value for the base color. It stores these values in a file the user names. It prompts the user whether they want to read from the file. It then asks the user whether they want to add 5 more colors to the file.

### v0.2 Updates

*Coming soon*

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
100
Enter a GREEN color value (Must be between 0 and 255)
15
Enter a BLUE color value (Must be between 0 and 255)
200
Please enter a name for the file you will be storing the rgb values in:
color.svg
Writing to the file...

Would you like to read from the file? (y/n)
y
Reading from file...

rgb(100,15,200)

Now that it has been identified which color you would like as a base color, a list of five more colors that do not have problematic color combinations can be generated.

Would you like to add five more colors to color.svg? (Enter y for yes and n for no)

y
```

## C++ Guide

### Variables and Data Types

I used the integer variable to store my rgb values I collected from the user as well as the rgb values my program will generate in a later version. I needed to store a non decimal number so I decided the integer data type worked best for this problem.

I used the string variable to store the filename that the user chooses. Since that will always be multiple characters, the string data type worked best. I also used a string variable to store the response the user gives when asked whether they want to proceed at two times in the program. 

I used the fstream variable type because you can't do file input and output without it, at least to my knowledge. 

### Console Input and Output

I used a lot of console input and output in my program. All of the words displayed when you run the program are displayed because I used cout statements to make sure the user could read them. I needed to use cin statements whenever collecting information from the user. An example of both of these is when I ask 
```
Enter a RED color value (Must be between 0 and 255)
```
and the user enters an integer stored in the variable "red."


### Decisions

I used an if statement when I asked whether the user wanted to read the information from their file. This was an effective use of a decision construct because it lets the user know that the information they entered was saved to a file. 

I used an if statement when I asked the user if they would like to add five more colors to their file. I used a decision construct here to give the user an option whether they wanted to continue using the program to generate the features it is supposed to do or whether they would like to quit the program.

### Iteration

I used 3 while loops for when I was collecting the number values for the rgb value of the base color. These loops account for the mistake of the user entering a number outside the specified range and will ask the user to enter a new number until they choose a number in the correct range. This is an effective use of a loop because it will only run if the specifications in the condition hold true. This would not be the case if I had used a do while loop for example. 

### File Input and Output

I used file input and output effectively in my program. The values I ask for for the base color are stored in a file the user names themselves. To cover my bases, I also have made my program read from that file to make sure the information was stored in it correctly. I remember to open and close the file each time I need to interact with it.  


### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
