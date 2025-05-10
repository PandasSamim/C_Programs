/**
 * @main.c
 * @brief Program to compare two integers and display the greater number or equality
 */

#include<stdio.h>

/**
 * @brief Main function that compares two integers and displays the result
 * 
 * Reads two integers from user input, compares them, and prints:
 * - The greater number if they are unequal
 * - "EQUAL" if both numbers are same
 * 
 * @return int Returns 0 to indicate successful execution
 */
int main() {
    // Declare variables to store user input
    int a, b;

    // Prompt user for input
    printf("Enter two values: ");
    
    // Read two integer values from standard input
    scanf("%d %d", &a, &b);

    // Compare the two numbers
    if (a > b) {
        // First number is greater
        printf("%d is greater number.\n", a);
    } else if (b > a) {
        // Second number is greater
        printf("%d is greater number.\n", b);
    } else {
        // Numbers are equal
        printf("EQUAL\n");
    }

    // Return success status
    return 0;
}