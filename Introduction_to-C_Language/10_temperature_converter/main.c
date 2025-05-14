// Program to convert temperature between Celsius and Fahrenheit.
#include <stdio.h>

int main() {
    float tem;      // Stores the temperature value entered by the user.
    float conTem;   // Stores the converted temperature value.
    int choice;     // Stores the user's choice for conversion direction.

    // Display the temperature conversion menu to the user.
    printf("***** TEMPERATURE CONVERSION SCALE *****\n");
    printf("\t1. C to F\n");
    printf("\t2. F to C\n");
    printf("What is your choice?(1/2)=> ");

    // Read the user's choice for the conversion type.
    scanf("%d", &choice);

    // Use a switch statement to perform the selected temperature conversion.
    switch (choice) {
        // Case 1: Convert Celsius to Fahrenheit.
        case 1:
            // Prompt the user to enter the temperature in Celsius.
            printf("Enter the C temperature:  ");
            scanf("%f", &tem);

            // Apply the formula to convert Celsius to Fahrenheit: F = (C * 9/5) + 32.
            conTem = ((tem * 9) / 5) + 32;

            // Display the result of the Celsius to Fahrenheit conversion.
            printf("***** ANSWER *****\n");
            printf("\t%.2fC = %.2fF\n", tem, conTem);
            break;

        // Case 2: Convert Fahrenheit to Celsius.
        case 2:
            // Prompt the user to enter the temperature in Fahrenheit.
            printf("Enter the F temperature:  ");
            scanf("%f", &tem);

            // Apply the formula to convert Fahrenheit to Celsius: C = (F - 32) * 5/9.
            conTem = ((tem - 32) * 5) / 9;

            // Display the result of the Fahrenheit to Celsius conversion.
            printf("***** ANSWER *****\n");
            printf("\t%.2fF = %.2fC\n", tem, conTem);
            break;

        // Default case: Handle invalid user input.
        default:
            printf("Error: Invalid input. Please enter 1 or 2.\n");
    }

    return 0; // Indicate successful program execution.
}
