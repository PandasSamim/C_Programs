// Program to calculate and print the sum of a harmonic series up to a given value of n.
// The harmonic series is defined as 1 + 1/2 + 1/3 + ... + 1/n.
#include <stdio.h>

int main() {
    int n;          // Stores the positive integer 'n' up to which the series is calculated.
    float hSum = 0; // Stores the sum of the harmonic series. Initialized to 0.

    // Prompt the user to enter the value of 'n'.
    printf("Enter the value of n: ");

    // Read the integer input from the user and validate it.
    // Check if scanf successfully reads an integer (returns 1) and if 'n' is a positive integer (n >= 1).
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Invalid input. Please enter a positive integer.\n");
        return 1; // Indicate an error occurred due to invalid input.
    }

    // Loop to calculate the sum of the harmonic series.
    // The loop iterates from 1 to 'n' (inclusive).
    for (int i = 1; i <= n; i++) {
        // Add the reciprocal of the current number (1.0/i) to the harmonic sum.
        // Using 1.0 ensures floating-point division.
        hSum += (1.0 / i);
    }

    // Print the calculated harmonic sum, formatted to five decimal places.
    printf("The harmonic sum from 1 to 1/%d is: %.5f\n", n, hSum);

    return 0; // Indicate successful program execution.
}
