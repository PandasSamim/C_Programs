// Program to calculate the area and perimeter of a rectangle based on user-provided length and breadth in meters.
// The program also determines if the shape is a rectangle or a square.
#include <stdio.h>

int main() {
    float length;    // Stores the length of the shape in meters.
    float breadth;   // Stores the breadth (width) of the shape in meters.
    float area;      // Stores the calculated area of the shape in square meters.
    float perimeter; // Stores the calculated perimeter of the shape in meters.

    // Prompt the user to enter the length and breadth.
    printf("Enter the length and breadth (in meters): ");

    // Read the length and breadth from the user and validate the input.
    // Check if scanf successfully reads two floating-point numbers (returns 2) and if both length and breadth are non-zero.
    if (scanf("%f %f", &length, &breadth) != 2 || length == 0 || breadth == 0) {
        printf("Error: Invalid input. Please enter non-zero values for length and breadth.\n");
        return 1; // Indicate an error occurred due to invalid input.
    }

    // Calculate the area of the shape: Area = length * breadth.
    area = length * breadth;

    // Calculate the perimeter of the shape: Perimeter = 2 * (length + breadth).
    perimeter = 2 * (length + breadth);

    // Display the calculated area and perimeter to the user, formatted to two decimal places.
    printf("Area = %.2f sq. meters\n", area);
    printf("Perimeter = %.2f meters\n", perimeter);

    // Determine if the shape is a square or a rectangle based on whether the length and breadth are equal.
    if (length == breadth) {
        printf("This is a square.\n");
    } else {
        printf("This is a rectangle.\n");
    }

    return 0; // Indicate successful program execution.
}
