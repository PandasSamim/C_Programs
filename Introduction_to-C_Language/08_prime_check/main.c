// Program to read a positive integer 'n' and determine if it is "PRIME" or "COMPOSITE".
#include <stdio.h>
#include <stdbool.h> // Include for the boolean data type (true/false).

// Function to check if a given integer 'n' is a prime number.
// Parameters:
//   n: The integer to be checked for primality.
// Returns:
//   true if 'n' is prime, false otherwise.
bool isPrime(int n) {
    // 1 is not a prime number.
    if (n == 1) {
        return false;
    }
    // 2 is the only even prime number.
    else if (n == 2) {
        return true;
    }
    // If 'n' is even and greater than 2, it's not prime.
    else if (n % 2 == 0) {
        return false;
    }
    // Check for odd divisors from 3 up to the square root of 'n'.
    // We only need to check odd numbers because even numbers have already been handled.
    for (int i = 3; i * i <= n; i += 2) {
        // If 'n' is divisible by 'i', it's not prime.
        if (n % i == 0) {
            return false;
        }
    }
    // If no divisors were found, 'n' is a prime number.
    return true;
}

int main() {
    int n; // Stores the positive integer entered by the user.

    // Prompt the user to enter a positive integer.
    printf("Enter the value of n: ");

    // Read the integer input from the user and validate it.
    // Check if scanf successfully reads an integer (returns 1) and if the input 'n' is greater than or equal to 1.
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Invalid Input. Please enter a positive integer.\n");
        return 1; // Indicate an error occurred during input.
    }

    // Check if the number is less than 1 and inform the user if it's not applicable for prime/composite classification.
    if (n < 1) {
        printf("This number is less than 1, so it is not applicable for prime or composite classification.\n");
    }
    // Call the isPrime function to check if 'n' is prime.
    else if (isPrime(n)) {
        printf("PRIME\n");
    }
    // If isPrime returns false, then 'n' is composite (for n > 1).
    else {
        printf("COMPOSITE\n");
    }

    return 0; // Indicate successful program execution.
}
