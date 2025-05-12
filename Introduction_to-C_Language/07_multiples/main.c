// Program to read an integer 'n' and print its first 10 multiples.
#include <stdio.h>

int main() {
    int n; // Stores the integer entered by the user.

    // Prompt the user to enter an integer.
    printf("Enter the value of n: ");

    // Read the integer input from the user and validate it.
    // Check if scanf successfully reads an integer (returns 1).
    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid Input. Please enter an integer.\n");
        return 1; // Indicate an error occurred during input.
    }

    // Loop to calculate and print the first 10 multiples of 'n'.
    // The loop iterates from 1 to 10 (inclusive).
    for (int i = 1; i <= 10; i++) {
        // Calculate the current multiple (n * i).
        // Print the multiplication expression and the result.
        printf("%d × %d = %d\n", n, i, n * i);
    }

    return 0; // Indicate successful program execution.
}
