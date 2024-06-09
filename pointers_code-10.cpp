#include<iostream>
using namespace std;

int main()
{
    int a[10]; // Declare an array of 10 integers
    int *ptr = a; // Pointer 'ptr' points to the first element of array 'a'

    // Loop to read values into the array and display the address and value
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i]; // Read value into the array at index 'i'
        cout << "Address : " << ptr + i << " holds value : " << *(ptr + i) << endl;
        // Display the address of the ith element and its value
    }

    return 0;
}

/*
    Explanation of Pointers:
    - A pointer is a variable that stores the memory address of another variable.
    - In this code, 'ptr' is a pointer that holds the address of the first element of the array 'a'.
    - The statement 'int *ptr = a;' initializes 'ptr' to point to the first element of 'a'.

    - Accessing Array Elements Using Pointers:
        - In the loop, 'ptr + i' calculates the address of the ith element of the array.
        - The expression '*(ptr + i)' dereferences the pointer to access the value at that address.

    Different Ways of Using '*' with Pointers:
    - Using '*' with pointers can achieve different outputs depending on its usage context.
    
    1. Accessing the value at the pointer's address:
       int *p = &a;
       cout << *p; // Outputs the value stored in 'a'

    2. Accessing array elements:
       int arr[5] = {10, 20, 30, 40, 50};
       int *ptr = arr;
       cout << *(ptr + 2); // Outputs the value at index 2 (30)
       cout << ptr[2]; // Outputs the value at index 2 (30) - equivalent to *(ptr + 2)
       
    3. Modifying the value at the pointer's address:
       int x = 5;
       int *p = &x;
       *p = 10; // Changes the value of 'x' to 10
       cout << x; // Outputs 10

    4. Pointer arithmetic:
       int arr[3] = {1, 2, 3};
       int *ptr = arr;
       cout << *ptr << endl; // Outputs 1 (value at index 0)
       ptr++;
       cout << *ptr << endl; // Outputs 2 (value at index 1)

    5. Double pointer (pointer to a pointer):
       int x = 10;
       int *p = &x;
       int **pp = &p;
       cout << **pp; // Outputs 10 (value of 'x')

    Summary:
    - Pointers store the address of a variable.
    - '*' (dereference operator) is used to access the value at the pointer's address.
    - Pointer arithmetic allows accessing array elements.
    - Pointers can be used to modify the value of a variable.
    - Double pointers are pointers that point to other pointers.
*/
