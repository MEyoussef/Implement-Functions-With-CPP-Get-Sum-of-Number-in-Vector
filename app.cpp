#include <iostream>
#include <vector>
using namespace std;

/**
 * This function takes a vector of integers as input and returns the result of
 * applying a specified operation (+, -, *) to all the numbers in the vector.
 * The operation is chosen by the user when the function is called.
 * 
 * @param numbers - the vector of integers
 * @return the result of the operation applied to all the numbers in the vector
 */
int sum_numbers(const vector<int> &numbers)
{
    // Initialize a variable to hold the user's choice of operation
    char op = ' ';

    // Initialize a variable to hold the result of the operation
    int result = 1;

    // Prompt the user to choose an operation
    cout << "choose operation (+, -, *): ";

    // Read the user's choice of operation into the op variable
    cin >> op;

    // If the user chose the '+' or '-' operation, set the result to 0
    // (this is necessary because the '+' and '-' operations are not commutative)
    if (op == '+' || op == '-')
    {
        result = 0; // Set the result to 0 for '+' and '-' operations
    }

    // Iterate over each number in the vector
    for (int i : numbers)
    {
        // Depending on the user's choice of operation, perform the operation
        // on the result and the current number
        switch (op)
        {
        case '+':
            result += i; // Add the current number to the result
            break;
        case '-':
            result -= i; // Subtract the current number from the result
            break;
        case '*':
            result *= i; // Multiply the result by the current number
            break;
        }
    }

    // Return the result of the operation applied to all the numbers in the vector
    return result;
}

int main()
{
    cout << sum_numbers({1, 2, 3, 4}); // 10
    return 0;
}