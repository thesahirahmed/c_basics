/* 
Complete Basic of C++ Programming
Code 2: Basic Input and Output using namespace std....
*/

// Basic Input/Output

#include <iostream>

/* 
 The <iostream> library is included to allow the program to perform input and output operations.
 This library includes the definitions for the standard input-output stream objects like cin, cout, cerr, etc.
 */

using namespace std;

/*
This line allows the program to use all the elements in the std namespace without qualifying them with 'std::'
*/

int main()
{
    /* 
     The main function is the entry point of any C++ program.
     'int' indicates that the function returns an integer value to the operating system upon completion.
     The parentheses '()' indicate that this function does not take any parameters.
     */
    
    // Print the message across three lines using separate cout statements.
    cout << "Hi Viewers, we have used "<<endl;
    // This statement prints "Hi Viewers, we have used " to the console.

    cout << "namespace std, to avoid "<<endl;
    // This statement prints "namespace std, to avoid " to the console.

    cout << "multiple entry of using std !!!";
    // This statement prints "multiple entry of using std !!!" to the console.
    /* 

     std::cout is the standard output stream in C++.
     It is used to print text to the console.
     The '<<' operator is used to send the string "Hi Viewers!!!" to the output stream.
     The text will be displayed on the console when this line is executed.
     */

    return 0;
    /* 
     The return 0 statement indicates that the program has executed successfully.
     Returning 0 is a convention in C++ that signals successful termination to the operating system.
     */
}

/* 
The '<< endl' manipulator is used to insert a newline character, moving the cursor to the next line.
*/

