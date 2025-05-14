// Interactive program to demonstrate multiplication and division of two-digit numbers.
#include <stdio.h>

int main() {
    int num1, num2, choice; // Variables to store the two input numbers and the user's choice of operation.
    float result;            // Variable to store the result of the multiplication or division.

    // Input for the first two-digit number.
    do {
        printf("Enter the 1st two-digit number: ");
        // Read the input and check if it's a valid integer.
        if (scanf("%d", &num1) != 1) {
            printf("Error: Invalid input. Please enter an integer.\n");
            // Clear the input buffer to prevent infinite loops on invalid input.
            while (getchar() != '\n');
            return 1; // Indicate an error.
        } else if (num1 < 10 || num1 > 99) {
            printf("This is not a two-digit number. Please enter a number between 10 and 99.\n");
        }
    } while (num1 < 10 || num1 > 99); // Repeat until a valid two-digit number is entered.

    // Input for the second two-digit number.
    do {
        printf("Enter the 2nd two-digit number: ");
        // Read the input and check if it's a valid integer.
        if (scanf("%d", &num2) != 1) {
            printf("Error: Invalid input. Please enter an integer.\n");
            // Clear the input buffer.
            while (getchar() != '\n');
            return 1; // Indicate an error.
        } else if (num2 < 10 || num2 > 99) {
            printf("This is not a two-digit number. Please enter a number between 10 and 99.\n");
        }
    } while (num2 < 10 || num2 > 99); // Repeat until a valid two-digit number is entered.

    // Display the operation choices to the user.
    printf("***** CALCULATOR *****\n");
    printf("\t1. Multiply\n");
    printf("\t2. Division\n");
    printf("Enter your choice (1/2): ");

    // Read the user's choice of operation.
    if (scanf("%d", &choice) != 1) {
        printf("Error: Invalid input. Please enter 1 or 2.\n");
        // Clear the input buffer.
        while (getchar() != '\n');
        return 1; // Indicate an error.
    }

    // Perform the selected operation based on the user's choice.
    printf("***** RESULT *****\n");
    switch (choice) {
        case 1:
            // Perform multiplication.
            result = num1 * num2;
            printf("%d * %d = %.2f\n", num1, num2, result);
            break;
        case 2:
            // Perform division, with a check for division by zero.
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1; // Indicate an error.
            }
            result = (float)num1 / num2; // Cast num1 to float for floating-point division.
            printf("%d / %d = %.2f\n", num1, num2, result);
            break;
        default:
            // Handle invalid operation choices.
            printf("Error: Invalid operation choice. Please enter 1 or 2.\n");
    }

    return 0; // Indicate successful program execution.
}
