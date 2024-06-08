#include <iostream>
using namespace std;

int main()
{
    // Initialize a string with the value "King"
    string s = "King";

    // Output the first character of the string (index 0)
    cout << s[0] << endl;

    // Change the second character of the string to 'k'
    s[1] = 'k';

    // Output the modified string
    cout << s << endl;

    return 0;
}

/*
    Explanation:
    - A string in C++ is a sequence of characters.
    - Strings can be manipulated similarly to arrays, where each character in the string has an index.
    - The string "King" has the following characters and indexes:
      Index:   0   1   2   3
      String:  K   i   n   g

    - In the provided code:
        - We initialize a string `s` with the value "King".
        - We output the first character of the string using `s[0]`.
        - We modify the second character of the string to 'k' using `s[1] = 'k'`.
        - We output the modified string, which is now "Kkng".

    Difference between Array Indexing and String Indexing:
    
    | Aspect               | Array Indexing                                | String Indexing                               |
    |----------------------|-----------------------------------------------|-----------------------------------------------|
    | Data Type            | Can hold various data types (int, float, etc.)| Holds characters only                         |
    | Initialization       | int arr[] = {1, 2, 3};                        | string s = "Hello";                           |
    | Indexing             | Starts from 0                                 | Starts from 0                                 |
    | Accessing Elements   | arr[0] (accesses first element)               | s[0] (accesses first character)               |
    | Modifying Elements   | arr[1] = 10; (modifies second element)        | s[1] = 'e'; (modifies second character)       |
    | Size Change          | Fixed size, defined at initialization         | Dynamic size, can grow or shrink              |
    | Memory Allocation    | Contiguous block of memory                    | Contiguous block of memory                    |
    | Usage                | Typically used for numbers or fixed-size data | Typically used for text manipulation          |

    - Arrays:
        - Arrays can hold multiple data types (int, float, etc.).
        - Arrays have a fixed size defined at initialization.
        - Example: int arr[] = {1, 2, 3};
        - Elements are accessed using indices, starting from 0.
        - Modifying an element: arr[1] = 10; (changes the second element to 10)

    - Strings:
        - Strings hold characters and are used for text manipulation.
        - Strings are dynamic and can grow or shrink in size.
        - Example: string s = "Hello";
        - Characters are accessed using indices, starting from 0.
        - Modifying a character: s[1] = 'e'; (changes the second character to 'e')
*/
