#include<bits/stdc++.h>
// This header includes all the standard C++ libraries like iostream, vector, algorithm, etc.

using namespace std;
// This line allows the program to use all the elements in the std namespace without qualifying them with 'std::'

int main()
{
    // The main function is the entry point of any C++ program.
    
    int x, y;
    // Declare two integer variables x and y.

    cout << "Enter two numbers: ";
    // Prompt the user to enter two numbers.

    cin >> x >> y;
    // Read two integers from the standard input and store them in variables x and y.

    int res = x + y;
    // Calculate the sum of x and y and store it in the variable res.

    cout << "Sum of " << x << " and " << y << " is : " << res;
    // Output the sum along with the numbers entered by the user.

    return 0;
    // The return 0 statement indicates successful termination of the program.
}
