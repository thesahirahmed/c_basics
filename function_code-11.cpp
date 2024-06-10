#include "iostream"
using namespace std;

// Function to multiply two integers and return the result
int multiply(int a, int b)
{
    return a * b; // Returns the product of a and b
}

// Function to add two integers and print the result
void add(int a, int b)
{
    cout << "Sum is : " << a + b << "\n"; // Prints the sum of a and b
}

// Function to subtract two integers entered by the user and return the result
int subtract()
{
    int a, b;
    cin >> a >> b; // Takes two integers as input from the user
    return a - b; // Returns the result of a - b
}

// Function to divide two integers entered by the user and print the result
void divide()
{
    int a, b;
    cin >> a >> b; // Takes two integers as input from the user
    cout << "A/B = " << a / b; // Prints the result of a / b
}

int main()
{
    int res = multiply(5, 20); // Calls the multiply function with arguments 5 and 20
    cout << "Multiply : " << res << endl; // Prints the result of multiplication

    add(5075, 1025); // Calls the add function with arguments 5075 and 1025

    int sub = subtract(); // Calls the subtract function and stores the result in 'sub'
    cout << "Sub : " << sub << endl; // Prints the result of subtraction

    divide(); // Calls the divide function

    return 0;
}

/*
    Explanation of Functions:
    - A function is a block of code that performs a specific task.
    - Functions allow code reusability, modularity, and better organization of the code.

    Different Types of Functions in the Provided Code:
    
    1. multiply:
        - Type: Function with parameters and return value
        - Description: Takes two integers as parameters and returns their product.
        - Syntax: int multiply(int a, int b)
        - Usage: int result = multiply(5, 20);

    2. add:
        - Type: Function with parameters and no return value (void function)
        - Description: Takes two integers as parameters and prints their sum.
        - Syntax: void add(int a, int b)
        - Usage: add(5075, 1025);

    3. subtract:
        - Type: Function with no parameters and a return value
        - Description: Takes two integers as input from the user and returns their difference.
        - Syntax: int subtract()
        - Usage: int result = subtract();

    4. divide:
        - Type: Function with no parameters and no return value (void function)
        - Description: Takes two integers as input from the user and prints their division result.
        - Syntax: void divide()
        - Usage: divide();

    Different Ways to Use Functions:
    - Functions with Parameters and Return Value:
      These functions take parameters and return a value based on the operation they perform.
      Example: int multiply(int a, int b) { return a * b; }

    - Functions with Parameters and No Return Value:
      These functions take parameters but do not return a value. They typically perform an action such as printing.
      Example: void add(int a, int b) { cout << "Sum is : " << a + b << "\n"; }

    - Functions with No Parameters and Return Value:
      These functions do not take any parameters but return a value based on input taken within the function.
      Example: int subtract() { int a, b; cin >> a >> b; return a - b; }

    - Functions with No Parameters and No Return Value:
      These functions do not take any parameters and do not return a value. They typically perform an action such as printing.
      Example: void divide() { int a, b; cin >> a >> b; cout << "A/B = " << a / b; }

    Summary:
    - Functions help to break down complex problems into simpler sub-problems.
    - They improve code readability and maintainability.
    - Different types of functions are used based on whether they need to take parameters, return a value, or both.
*/
