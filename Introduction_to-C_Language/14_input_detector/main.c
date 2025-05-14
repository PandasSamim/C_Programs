// Program to accept a single character input and determine if it is a number, an alphabet, or a special character.
#include <stdio.h>
#include <ctype.h> // Include for character classification functions like isdigit() and isalpha().

int main() {
    char c; // Stores the character input by the user.

    // Prompt the user to enter a number, alphabet, or special character.
    printf("Enter a number/alphabet/special character: ");

    // Read a single character from the standard input.
    scanf("%c", &c);

    // Check if the entered character is a digit using the isdigit() function.
    if (isdigit(c)) {
        printf("This is a number.\n");
    }
    // If it's not a digit, check if it's an alphabet using the isalpha() function.
    else if (isalpha(c)) {
        printf("This is an alphabet.\n");
    }
    // If it's neither a digit nor an alphabet, it's considered a special character.
    else {
        printf("This is a special character.\n");
    }

    return 0; // Indicate successful program execution.
}
