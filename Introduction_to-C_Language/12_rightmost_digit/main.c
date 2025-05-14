// Program to read a floating-point number and display the rightmost digit of its integral part.
#include <stdio.h>
#include <math.h> // Include for the fabs() function to handle negative numbers.

int main() {
    double n;        // Stores the floating-point number entered by the user.
    int intPart;     // Stores the integral part of the floating-point number.
    int rmdi;        // Stores the rightmost digit of the integral part.

    // Prompt the user to enter a floating-point number.
    printf("Enter the floating-point number: ");

    // Read the double-precision floating-point number from the user and validate the input.
    // Check if scanf successfully reads a double (returns 1).
    if (scanf("%lf", &n) != 1.0) {
        printf("Error: Invalid input. Please enter a floating-point number.\n");
        return 1; // Indicate an error occurred due to invalid input.
    }

    // Extract the integral part of the floating-point number.
    // The (int) cast truncates the decimal part.
    // fabs(n) is used to ensure we are working with the absolute value for extracting the rightmost digit.
    intPart = (int)fabs(n);

    // Calculate the rightmost digit of the integral part using the modulo operator (%).
    // Taking modulo 10 gives the remainder when divided by 10, which is the last digit.
    rmdi = intPart % 10;

    // Display the rightmost digit of the integral part to the user.
    printf("The rightmost digit of the integral part is: %d\n", rmdi);

    return 0; // Indicate successful program execution.
}
