// Program to calculate and print the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n;      // Stores the positive integer 'n' entered by the user.
    int sum;    // Stores the calculated sum of the first 'n' natural numbers.

    // Prompt the user to enter the value of 'n'.
    printf("Enter the value of n: ");

    // Read the integer input from the user and validate it.
    // Check if scanf successfully reads an integer (returns 1) and if the input 'n' is a positive integer (n >= 1).
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Invalid Input. Please enter a positive integer.\n");
        return 1; // Indicate an error occurred during input.
    }

    // Calculate the sum of the first 'n' natural numbers using the formula: sum = n * (n + 1) / 2.
    sum = (n * (n + 1)) / 2;

    // Print the calculated sum to the console.
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0; // Indicate successful program execution.
}
