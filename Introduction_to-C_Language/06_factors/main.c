// Program to read a non-negative integer 'n' and print its factorial.
#include <stdio.h>

// Function to calculate the factorial of a non-negative integer recursively.
// Parameters:
//   n: The non-negative integer for which to calculate the factorial.
// Returns:
//   The factorial of n.
int fac(int n) {
    // Base cases: factorial of 0 and 1 is 1.
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive step: factorial of n is n multiplied by the factorial of (n-1).
    return n * fac(n - 1);
}

int main() {
    int n;      // Stores the non-negative integer entered by the user.
    int result; // Stores the calculated factorial of n.

    // Prompt the user to enter a non-negative integer.
    printf("Enter the value of n: ");

    // Read the integer input from the user and validate it.
    // Check if scanf successfully reads an integer (returns 1) and if the input 'n' is non-negative (n >= 0).
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Invalid input. Please enter a non-negative integer.\n");
        return 1; // Indicate an error occurred during input.
    }

    // Calculate the factorial of the entered number using the 'fac' function.
    result = fac(n);

    // Print the calculated factorial to the console.
    printf("The factorial of %d is %d\n", n, result);

    return 0; // Indicate successful program execution.
}
