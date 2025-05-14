// Program to read a positive integer 'n' and print the single-digit sum of its digits.
// Example: Input 8626 -> 8+6+2+6 = 22 -> 2+2 = 4.
#include <stdio.h>

// Recursive function to calculate the single-digit sum of digits of a number.
// Parameters:
//   n: The positive integer whose digits need to be summed.
// Returns:
//   The single-digit sum of the digits of n.
int sumDigit(int n) {
    int sum = 0;

    // Base case: If the number is a single digit (0-9), return the number itself.
    if (n <= 9) {
        return n;
    } else {
        // Recursive step: While the number is greater than 0, extract the last digit,
        // add it to the sum, and then remove the last digit by integer division.
        while (n != 0) {
            sum += n % 10; // Get the last digit (remainder when divided by 10).
            n /= 10;      // Remove the last digit (integer division by 10).
        }
        // Recursively call sumDigit with the intermediate sum until a single-digit sum is obtained.
        return sumDigit(sum);
    }
}

int main() {
    int n; // Stores the positive integer entered by the user.

    // Prompt the user to enter a positive integer.
    printf("Enter the value: ");

    // Read the integer input from the user and validate it.
    // Check if scanf successfully reads an integer (returns 1) and if 'n' is a positive integer (n >= 1).
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Invalid Input. Please enter a positive integer.\n");
        return 1; // Indicate an error occurred due to invalid input.
    }

    // Call the sumDigit function to calculate the single-digit sum and print the result.
    printf("%d\n", sumDigit(n));

    return 0; // Indicate successful program execution.
}
