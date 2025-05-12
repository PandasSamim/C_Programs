// Program to read n numbers from the user and identify each as even or odd.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;          // Stores the number of elements the user wants to enter.
    int *arr;       // Pointer to dynamically allocated array to store the numbers.

    // Prompt the user to enter the quantity of numbers.
    printf("How many numbers you entered?=> ");

    // Read the input for the number of elements.
    // Check if the input was successfully read (scanf returns 1 on success) and if n is a positive integer.
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Invalid Input. Please enter a positive integer for the number of elements.\n");
        return 1; // Indicate an error occurred during input.
    }

    // Dynamically allocate memory for an array of 'n' integers.
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful.
    if (arr == NULL) {
        printf("Error: Memory allocation failed. Unable to allocate memory for the array.\n");
        return 1; // Indicate an error occurred during memory allocation.
    }

    // Loop to read 'n' numbers from the user and store them in the array.
    for (int i = 0; i < n; i++) {
        printf("Enter the value #%d: ", i + 1);

        // Read each number and validate the input.
        // Check if the input was successfully read and if the number is non-negative.
        if (scanf("%d", &arr[i]) != 1 || arr[i] < 0) {
            printf("Error: Invalid input. Please enter a non-negative integer.\n");
            free(arr); // Release the allocated memory before exiting.
            return 1;  // Indicate an error occurred during input.
        }
    }

    printf("\n\n");

    // Loop through the array to determine if each number is even or odd and print the result.
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            printf("%d is not even or not odd number\n", arr[i]);
        } else if (arr[i] % 2 == 0) {
            printf("%d is even number\n", arr[i]);
        } else {
            printf("%d is not even number\n", arr[i]); // Corrected the output message for odd numbers.
        }
    }

    free(arr); // Release the dynamically allocated memory after it's no longer needed.
    return 0;  // Indicate successful program execution.
}
