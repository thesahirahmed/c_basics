#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age, poll;

    // Prompt the user to enter their age
    cout << "Enter your age: ";
    cin >> age;

    // Check if the age is within the valid range
    if (age >= 18 && age <= 150) // Assuming no one lives above 150 years!
    {
        // If the age is valid, allow the user to vote
        cout << "Congrats!!! You can vote." << endl;
        cout << "\n";
        cout << "Vote for your party from the menu:" << endl;
        cout << "1. India\n";
        cout << "2. NDA\n";
        cout << "3. Others\n";
        cin >> poll;
        cout << "\n";

        // Process the user's vote choice
        switch (poll)
        {
            case 1:
                cout << "You voted for India\n";
                break;

            case 2:
                cout << "You voted for NDA\n";
                break;

            case 3:
                cout << "You voted for Others\n";
                break;

            default:
                cout << "Invalid Response\n";
        }
    }
    else if (age < 18)
    {
        // If the age is less than 18, user is not eligible to vote
        cout << "Sorry!!! You are not eligible.\n";
    }
    else
    {
        // If age is beyond the reasonable limit
        cout << "Invalid Response.\n";
    }

    return 0;
}

/*
    if Statement         |   else if Statement   |   else Statement
-------------------------------------------------------------------------------
1. Syntax               |   Syntax               |   Syntax
   if (condition)       |   else if (condition)  |   else
   {                    |   {                    |   {
       // Code          |       // Code          |       // Code
   }                    |   }                    |   }
                        |                        |
2. Execution            |   Execution            |   Execution
   - Checks the         |   - Checks the         |   - Executes when 
     condition and      |     condition and      |     all preceding
     executes code      |     executes code      |     conditions are
     inside the block   |     inside the block   |     false.
     if condition is    |     if condition is    |
     true.              |     true and all       |
   - If condition is    |     preceding          |
     false, skips       |     conditions are     |
     the block.         |     false.             |
                        |   - Skips the block    |
                        |     if condition is    |
                        |     false and there    |
                        |     is no else if or   |
                        |     if after it.       |
-------------------------------------------------------------------------------
3. Multiple             |   Multiple else if     |   Only one else
   Conditions           |   Conditions           |   block
   - Only one block     |   - Only one block     |   - Optional
     can be executed.   |     is executed,       |   - Executes if
   - Executes when      |     the first true     |     no other
     condition is       |     condition is       |     if or else if
     true.              |     encountered.       |     conditions are
   - Skips all other    |   - Skips all other    |     true.
     conditions after   |     else if blocks     | 
     it.                |     after it.          | 
                        |                        |
4. Overlapping          |   No overlapping       |   No overlapping
   Conditions           |   conditions allowed   |   conditions allowed
   - Conditions in      |   - Each else if       |   - Only one else
     if and else if     |     condition is       |     block will be
     blocks are         |     evaluated          |     executed, even
     independent.       |     independently.     |     if multiple
                        |   - If a condition     |     conditions are
                        |     is true,           |     true.
                        |     other else if      |
                        |     conditions are     |
                        |     not evaluated.     |
-------------------------------------------------------------------------------
5. Default              |   Default condition    |   Default condition
   condition            |                        |
   - Optional           |   - Optional           |   - Optional
   - Executes if no     |   - Executes if no     |   - Executes if no
     other condition    |     preceding          |     other condition
     is true.           |     condition is       |     is true.
   - Written using      |     true.              |   - Written using
     else statement.    |   - Written using      |     else statement.
                        |     else if statement. |
-------------------------------------------------------------------------------
end
*/