#include <iostream>
using namespace std;

int main()
{
    // Declare an array of size 5
    int arr[5];

    // Prompt the user to enter 5 numbers
    cout << "Enter 5 numbers: \n";

    // Read 5 numbers from the user and store them in the array
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    // Calculate the sum of the 5 numbers
    int res = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];

    // Output the sum of the numbers
    cout << "Sum of all is : " << res << "\n";

    return 0;
}

/*
    Explanation of Arrays:
    - An array is a collection of elements of the same data type stored at contiguous memory locations.
    - Arrays are zero-indexed, meaning the first element is at index 0, the second element is at index 1, and so on.
    - Example: int arr[5];  // Declares an array named arr of size 5.
        arr[0] = 10;  // Assigns 10 to the first element (index 0).
        arr[1] = 20;  // Assigns 20 to the second element (index 1).
        arr[2] = 30;  // Assigns 30 to the third element (index 2).
        arr[3] = 40;  // Assigns 40 to the fourth element (index 3).
        arr[4] = 50;  // Assigns 50 to the fifth element (index 4).

    - In the provided code:
        - We declare an array of size 5 to store 5 integer values.
        - We prompt the user to enter 5 numbers, which are then stored in the array.
        - We calculate the sum of these 5 numbers by accessing each element using its index.
        - We output the sum to the user.
*/
