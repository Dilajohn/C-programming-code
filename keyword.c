#include <stdio.h>

int main() {
    const char *keywords[] = {
        
        "auto", "break", "case", "char", "const", "continue", "default", "do",
        "double", "else", "enum", "extern", "float", "for", "goto", "if",
        "int", "long", "register", "return", "short", "signed", "sizeof", "static",
        "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"
    };

    int n = sizeof(keywords) / sizeof(keywords[0]);
    printf("List of C keywords:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", keywords[i]);
    }

    return 0;
}


//It includes the standard input/output header file <stdio.h> which provides the declaration for the printf function.

//Inside the main() function, it declares and initializes an array of strings named keywords.
//  This array contains all 32 reserved keywords in the C language as strings.

//It calculates the number of keywords by dividing the total size of the array by the size of one element.

//It then prints the title "List of C keywords:".

//A for loop iterates through each keyword in the array and prints it on a new line using printf.

//The program ends by returning 0, which indicates successful execution.

//Essentially, this program hardcodes the list of all C keywords into an array and prints them sequentially


//printf is a function to print formatted output to the console.

//"%s\n" is the format string:

//%s is a format specifier telling printf to expect a string argument.

// \n is an escape sequence meaning a new line, so after printing the string, it moves the cursor to the next line.

//keywords[i] is the argument passed to printf, which is the i-th element of the keywords array. Since keywords is an array of strings, keywords[i] is a single string.

//Thus, this statement prints the i-th keyword from the array followed by a newline, creating a list output where each keyword appears on its own line.