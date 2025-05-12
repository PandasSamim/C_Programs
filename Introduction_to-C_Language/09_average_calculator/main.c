// Program to calculate the average of a set of N numbers entered by the user.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;          // Stores the number of elements the user wants to average.
    int *arr;       // Pointer to dynamically allocated array to store the numbers.
    float sum = 0;  // Stores the sum of the N numbers.
    float avg;      // Stores the calculated average.

    // Prompt the user to enter the count of numbers they want to average.
    printf("How many number's you are average?=> ");

    // Read the input for the number of elements and validate it.
    // Check if scanf successfully reads an integer (returns 1) and if N is a positive integer.
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Error: N must be a positive integer.\n");
        return 1; // Indicate an error occurred due to invalid input for N.
    }

    // Dynamically allocate memory for an array of N integers.
    arr = (int *)malloc(N * sizeof(int));

    // Check if memory allocation was successful.
    if (arr == NULL) {
        printf("Error: Memory allocation failed.\n");
        return 1; // Indicate an error occurred during memory allocation.
    }

    // Prompt the user to enter the N numbers.
    printf("Enter the %d numbers: ", N);

    // Loop to read N numbers from the user and store them in the array.
    for (int i = 0; i < N; i++) {
        // Read each number and validate the input.
        // Check if scanf successfully reads an integer (returns 1).
        if (scanf("%d", &arr[i]) != 1) {
            printf("Error: Invalid input. Please enter integers only.\n");
            free(arr); // Release the allocated memory before exiting due to an error.
            return 1;  // Indicate an error occurred due to invalid input for a number.
        }
    }

    // Loop to calculate the sum of the numbers in the array.
    for (int i = 0; i < N; i++) {
        sum += arr[i]; // Add the current element to the sum.
    }

    // Calculate the average by dividing the sum by the total number of elements.
    avg = (float)sum / N; // Cast sum to float to ensure floating-point division.

    // Print the calculated average, formatted to two decimal places.
    printf("Average: %.2f\n", avg);

    // Release the dynamically allocated memory to prevent memory leaks.
    free(arr);

    return 0; // Indicate successful program execution.
}
