// The <bits/stdc++.h> header includes most of the standard headers used in competitive programming.
// However, it's not a standard header and not recommended for larger projects.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Data Type Ranges and Sizes Table:
    /*
        Data Type   | Size      | Range                                                      | Input Function
        --------------------------------------------------------------------------------------------------------------
        int         | 4 bytes   | -2,147,483,648 to 2,147,483,647                            | cin
        long        | 4 or 8 by | -2,147,483,648 to 2,147,483,647 
                    |           | or -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 | cin
        long long   | 8 bytes   | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807    | cin
        float       | 4 bytes   | Approximately ±3.4e±38 (6-9 significant figures)           | cin
        double      | 8 bytes   | Approximately ±1.7e±308 (15 significant figures)           | cin
        char        | 1 byte    | -128 to 127 or 0 to 255                                    | cin
        string      |           | Variable size                                              | getline(cin, variable)
    */

    int x=10; // 4 bytes
    long x1=15; // 4 or 8 bytes
    long long x2 = 15000000; // 8 bytes
    float x3 = 5.6; // 4 bytes
    float x4 = 5; // 4 bytes
    double x5 = 5.797; // 8 bytes
    
    // Output values of different data types:
    cout << "Value of x (int): " << x << endl;
    cout << "Value of x1 (long): " << x1 << endl;
    cout << "Value of x2 (long long): " << x2 << endl;
    cout << "Value of x3 (float): " << x3 << endl;
    cout << "Value of x4 (float): " << x4 << endl;
    cout << "Value of x5 (double): " << x5 << endl;

    string s="Hey";
    cout << s << endl;

    // Read a string from the standard input:
    string s1;
    getline(cin, s1); // Reads a line of text from cin into s1
    cout << s1 << endl;

    char ch='S'; // 1 byte
    cout << ch << endl;

    // Read a character from the standard input:
    char ch1;
    cin >> ch1; // Reads a single character from cin
    cout << ch1;

    return 0;
}

// Explanation of data types:
    /*
        - int: Use when you need to store whole numbers within the range of -2,147,483,648 to 2,147,483,647.
        - long: Use when you need to store whole numbers within a wider range than int.
        - long long: Use when you need to store very large whole numbers.
        - float: Use when you need to store decimal numbers with limited precision.
        - double: Use when you need to store decimal numbers with higher precision.
        - char: Use when you need to store single characters.
        - string: Use when you need to store a sequence of characters.
    */
