#include <iostream>
using namespace std;

int main()
{
    int a[100], d, n, res, i = 0, j = 1;

    // Prompt the user to enter the first three terms of the A.P.
    cout << "Enter first three terms of A.P. : \n";
    cin >> a[0] >> a[1] >> a[2];

    // Display the first three terms of the A.P.
    cout << "First three terms of your A.P. are : " << a[0] << "," << a[1] << "," << a[2] << endl;

    // Calculate the common difference of the A.P.
    d = a[1] - a[0];

    // Prompt the user to enter the term number they want to find
    cout << "Which term of A.P. do you want to find : \n";
    cin >> n;

    // Calculate the nth term of the A  .P.
    res = a[0] + (n - 1) * d;
    cout << "Nth term of A.P. is: " << res << endl;

    // Calculate and store the terms of the A.P. up to the nth term
    while (j < n)
    {
        a[j] = a[j - 1] + d;
        j++;
    }

    // Display the A.P. up to the nth term
    cout << "A.P. up to nth term is : \n";
    do
    {
        cout << i + 1 << " term : ";
        cout << a[i] << " " << endl;
        i++;
    } while (i < n);

    return 0;
}

/*
    Explanation:
    - Arithmetic Progression (A.P.): A sequence of numbers in which the difference of any two successive members is a constant.
    - Common difference (d): The fixed amount added to each term to get the next term in the A.P.
    
    - Formula for the nth term of an A.P.:
      Tn = a + (n - 1) * d
      where,
        Tn = nth term
        a = first term
        n = term number
        d = common difference

    - In the provided code:
        - We prompt the user to enter the first three terms of the A.P.
        - We calculate the common difference using the first two terms.
        - We ask the user for the term number (n) they want to find.
        - We calculate the nth term using the formula Tn = a + (n - 1) * d.
        - We calculate and store all terms up to the nth term in an array.
        - We display the A.P. up to the nth term.

    - while loop vs do-while loop:
        - while loop:
            - The condition is checked before the loop body is executed.
            - Syntax:
                while (condition) {
                    // code to be executed
                }
            - If the condition is false initially, the loop body is not executed at all.

        - do-while loop:
            - The loop body is executed at least once before the condition is checked.
            - Syntax:
                do {
                    // code to be executed
                } while (condition);
            - The loop body is guaranteed to execute at least once, regardless of the condition.

        - In the provided code:
            - The while loop is used to calculate and store the terms of the A.P. up to the nth term.
            - The do-while loop is used to display each term of the A.P. up to the nth term, ensuring that the loop body is executed at least once.
*/
