// Program to read n numbers from the user and print the greatest and the third greatest.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr;

    // Prompt the user to enter the count of numbers.
    printf("How many numbers do you enter?=> ");

    // Read the number of elements from the user and validate the input.
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Invalid input. Please enter a positive integer.\n");
        return 1; // Indicate an error occurred.
    }

    // Check if the user has entered at least 3 numbers, which is required to find the third greatest.
    if (n < 3) {
        printf("Minimum 3 numbers are required to find the greatest and the third greatest.\n");
        return 1; // Indicate an error if the number of inputs is less than 3.
    }

    // Dynamically allocate memory to store the array of n integers.
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful.
    if (arr == NULL) {
        printf("Error: Memory allocation failed.\n");
        return 1; // Indicate an error occurred due to memory allocation failure.
    }

    // Read n integer values from the user and store them in the array.
    for (int i = 0; i < n; i++) {
        printf("Enter value #%d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Error: Invalid input. Please enter an integer.\n");
            free(arr); // Release the allocated memory before exiting.
            return 1;  // Indicate an error occurred due to invalid input.
        }
    }

    // Sort the array in ascending order using a bubble sort algorithm.
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            // Compare adjacent elements and swap them if they are in the wrong order.
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the greatest number (the last element in the sorted array).
    printf("The greatest number is: %d\n", arr[n - 1]);

    // Print the third greatest number (the third last element in the sorted array).
    printf("The third greatest number is: %d\n", arr[n - 3]);

    // Release the dynamically allocated memory to prevent memory leaks.
    free(arr);

    return 0; // Indicate successful program execution.
}
