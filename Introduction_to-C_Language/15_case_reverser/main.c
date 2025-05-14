// Program to accept a word from the user and print the word with the case of each character reversed
// (lowercase to uppercase and uppercase to lowercase).
#include <stdio.h>
#include <stdlib.h> // For dynamic memory allocation (malloc, free).
#include <ctype.h>  // For character case manipulation functions (isupper, tolower, toupper).

int main() {
    int n;      // Stores the length of the word entered by the user.
    char *arr;   // Pointer to a dynamically allocated character array to store the word.

    // Prompt the user to enter the length of their word.
    printf("What is the length of your word?=> ");

    // Read the length of the word from the user and validate the input.
    // Check if scanf successfully reads an integer (returns 1).
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Invalid input. Please enter a positive integer for the word length.\n");
        return 1; // Indicate an error occurred due to invalid input.
    }

    // Dynamically allocate memory for a character array of size n+1 (to accommodate the null terminator).
    arr = (char *)malloc((n + 1) * sizeof(char));

    // Check if memory allocation was successful.
    if (arr == NULL) {
        printf("Error: Memory allocation failed. Unable to allocate memory for the word.\n");
        return 1; // Indicate an error occurred during memory allocation.
    }

    // Prompt the user to enter the word.
    printf("Enter the word: ");

    // Read the word entered by the user. Note that scanf with "%s" can lead to buffer overflows
    // if the input word exceeds the allocated size. For safer input, consider using fgets.
    scanf("%s", arr);

    // Iterate through each character of the word to reverse its case.
    for (int i = 0; i < n; i++) {
        // Check if the current character is uppercase using isupper().
        if (isupper(arr[i])) {
            // If it's uppercase, convert it to lowercase using tolower().
            arr[i] = tolower(arr[i]);
        } else {
            // If it's not uppercase (meaning it's lowercase or another character),
            // convert it to uppercase using toupper().
            arr[i] = toupper(arr[i]);
        }
    }

    // Print the word with the reversed case.
    printf("Reversed case: %s\n", arr);

    // Release the dynamically allocated memory to prevent memory leaks.
    free(arr);

    return 0; // Indicate successful program execution.
}
