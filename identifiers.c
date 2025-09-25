// ---identifiers ----

// These are names used to identify variables, Functions , arrays and other user defined elements .
//They serve as labels to access and manipulate data in a program.
//Syntax Rules for Identifiers in C:
//Must start with a letter (uppercase or lowercase) or an underscore (_).

//Can contain letters, digits (0-9), and underscores after the first character.

//Cannot start with a digit.

//Are case-sensitive, meaning myVar and myvar are considered different identifiers.

//Cannot be the same as any reserved keywords in C (e.g., int, return, if).

//Cannot contain special characters such as @, #, $, %, ^, &, *, or spaces.

//The length can be up to 31 characters, but only the first 31 characters are significant in many compilers.

//Should be meaningful to make the code more readable and maintainable.

//------Examples:-----
//Valid Identifiers: total, _sum, value1, my_variable

//Invalid Identifiers: 2sum (starts with a digit), int (reserved keyword), m+n (contains special character '+')

//Identifiers are the building blocks of a program that allow the programmer to uniquely name and refer to program elements

//----Creating an Identifier for a Variable----

#include <stdio.h>

int main() {

    // Creating an integer variable and
    // assign it the identifier 'var
    int var;

    // Assigning value to the variable
    // using assigned name
    var  = 10;

    
    // Referring to same variable using 
    // assigned name
    printf("%d", var);

    return 0;
}
//printf is a function that prints formatted output to the console.

//The string "%d" is a format specifier where %d tells printf to expect an integer value.

//var is the variable whose value will be printed in place of %d.

//*****NOTE*****
//printf functions by replacing format specifiers like %d with the
//  corresponding values passed as additional arguments, allowing flexible and formatted displays

//This line outputs the integer value stored in var.

//----Creating an Identifier for a Function----

