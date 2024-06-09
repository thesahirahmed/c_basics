#include <iostream>
using namespace std;

int main()
{
    int a = 10; // Number of students
    char c[10]; // Array to store attendance of each student
    int presentCount = 0, absentCount = 0; // Counters for present and absent students

    // Taking attendance input
    for (int i = 0; i < a; i++)
    {
        cin >> c[i]; // Read attendance status ('P' or 'A') for each student
        if (c[i] == 'P' || c[i] == 'p')
        {
            presentCount++; // Increment present count if 'P' or 'p'
        }
        else if (c[i] == 'A' || c[i] == 'a')
        {
            absentCount++; // Increment absent count if 'A' or 'a'
        }
    }

    // Displaying attendance details
    for (int i = 0; i < a; i++)
    {
        cout << "Student " << i + 1 << " : " << c[i] << "\n"; // Output each student's attendance status
    }

    // Displaying the counts of present and absent students
    cout << "Number of students present: " << presentCount << "\n";
    cout << "Number of students absent: " << absentCount << "\n";

    return 0;
}

/*
    Explanation of the Code:
    - We declare an integer `a` with a value of 10 to represent the number of students.
    - We declare a character array `c` of size 10 to store the attendance status of each student.
    - We declare two integer variables `presentCount` and `absentCount` to count the number of present and absent students.

    - For loop (First):
        - Syntax: for (initialization; condition; increment/decrement)
        - The first `for` loop is used to take attendance input for 10 students.
        - Initialization: int i = 0; (starts with the first student)
        - Condition: i < a; (loops until all students are processed)
        - Increment: i++ (moves to the next student)
        - Inside the loop, we read the attendance status for each student and update the `presentCount` and `absentCount` accordingly.

    - For loop (Second):
        - The second `for` loop is used to display the attendance details for each student.
        - Initialization: int i = 0; (starts with the first student)
        - Condition: i < a; (loops until all students are processed)
        - Increment: i++ (moves to the next student)
        - Inside the loop, we output the attendance status of each student.

    - The final section of the code displays the total number of present and absent students.

    Explanation of the For Loop:
    - A `for` loop is a control flow statement that allows code to be executed repeatedly based on a condition.
    - Syntax: for (initialization; condition; increment/decrement)
        - Initialization: executed once at the beginning of the loop.
        - Condition: checked before each iteration. If true, the loop body is executed. If false, the loop terminates.
        - Increment/Decrement: executed after each iteration of the loop body.
    - Example:
        for (int i = 0; i < 10; i++) {
            // code to be executed
        }
    - In the provided code, the `for` loop is used to iterate over the array `c` to take input and display the attendance status of each student.
*/
