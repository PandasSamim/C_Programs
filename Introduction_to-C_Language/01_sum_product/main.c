#include<stdio.h>  // Include standard input-output library for printf and scanf functions

int main(){  // Main function where program execution begins
    int a, b, sum, product;  // Declare variables to store two numbers, their sum and product
    
    // Prompt user to enter two numbers
    printf("Enter two numbers: ");
    // Read two integers from user input and store them in variables a and b
    scanf("%d %d", &a, &b);
    
    // Calculate the sum of the two numbers
    sum = a + b;
    // Calculate the product of the two numbers
    product = a * b;
    
    // Print the sum in the format: SUM:a+b=result
    printf("SUM:%d+%d=%d\n", a, b, sum);
    // Print the product in the format: PRODUCT:a*b=result
    printf("PRODUCT:%d*%d=%d\n", a, b, product);
    
    return 0;  // Return 0 to indicate successful program execution
}