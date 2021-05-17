# The Color pallete G.E.N.E.R.A.T.O.R

## Description

This program takes an input of how many colors a user wants to use for their color pallet thats greater than 2 but less than 4.

### v0.2 Updates

Now able to to call at least 3 files for color variations 

### v1.0 Updates

program can now properly create files while also fixing minor bugs. The use of classes and object were created and were stored on seperate file locations. You will also recieve an error if a file was not working, but sadly you would neeed to restart the program when this happens.


## Developer

Phinease Francis

## Example

To run the program, give the following commands:

```
2
3
4

```

Here is an example of the program running:

```
How many colors do you need?
Please enter numarical value between 2-4 for your color count.
1
That value was less then 2.
Please enter numarical value between 2-4 for your color count.
2
You chose to have 2 colors in your pallet
 
Please create a file name for your color pallete.
color
Your file name is: color.css
Navy Blue
Lemon yellow 
```

## C++ Guide

### Variables and Data Types

Only 2 string variable, [name] and [line], are used to save the users response input. Integer variable was created to store the number of files the user wished to generate.

### Console Input and Output

simple interaction requesting for individual number of collers. Further displaying the users choice. Sadly there was no option to change choice after picking. 

### Decisions

Only one decision was implemented and that was to pick between a number 2-4. This decision was final for the file type.

### Iteration
A do while loop was created to prevent the user from intering a number less then 2. But doesnt seem to correctly stop the user from creating a file that is greater then 5.

### File Input and Output

Opening file contain colors pre arranged were then input into the users own unique file. User had no choice of which color they would have.

### Arrays/Vectors

Vector named [whichColor]  was created to open different file color files based on [num] input from the user.

### Functions

Existing functions were moved to ".cpp" file under the class. a void function was created to also congradualte the user for their color. 

### Classes

A class was created called [colorall] that used both public and private. 

(classes more on my classes!!)
