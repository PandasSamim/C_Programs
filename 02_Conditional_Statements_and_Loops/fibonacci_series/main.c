// Program to read a positive integer 'n' and print the first 'n' terms of the Fibonacci series.
#include <stdio.h>

int main() {
    int n;          // Stores the number of Fibonacci terms to be printed.
    int t1 = 0;     // Stores the first term of the Fibonacci series.
    int t2 = 1;     // Stores the second term of the Fibonacci series.
    int nextTerm;   // Stores the next term in the Fibonacci series.

    // Prompt the user to enter the number of Fibonacci terms.
    printf("Enter the number of terms: ");

    // Read the integer input from the user and validate it.
    // Check if scanf successfully reads an integer (returns 1) and if 'n' is a positive integer (n >= 1).
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Invalid Input. Please enter a positive integer.\n");
        return 1; // Indicate an error occurred due to invalid input.
    }

    // Handle the cases for the first one or two terms.
    printf("Fibonacci series: ");
    if (n >= 1) {
        printf("%d ", t1); // Print the first term.
    }
    if (n >= 2) {
        printf("%d ", t2); // Print the second term.
    }

    // Generate and print the remaining Fibonacci terms.
    // The loop starts from the third term (i=3) and continues up to 'n' terms.
    for (int i = 3; i <= n; i++) {
        nextTerm = t1 + t2; // Calculate the next term by adding the previous two terms.
        printf("%d ", nextTerm); // Print the calculated next term.
        t1 = t2;             // Update t1 to the value of the previous term (t2).
        t2 = nextTerm;       // Update t2 to the value of the current term (nextTerm).
    }

    printf("\n"); // Print a newline character at the end of the output.
    return 0;     // Indicate successful program execution.
}
