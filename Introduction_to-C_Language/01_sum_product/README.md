# Sum and Product Calculator

## Description
This program takes two numbers as input and calculates their sum and product separately.

## Question
Write a program in C to read two numbers and produce the sum and product of those numbers and show the result separately.

## Features
- Takes two integer inputs from the user
- Calculates the arithmetic sum
- Calculates the arithmetic product
- Displays results in clean formatted output

## Usage
1. Compile the program:
   ```bash
   gcc sum_product.c -o sum_product
   ```
2. Run the executable:
   ```bash
   ./sum_product
   ```
3. Enter two numbers when prompted (space-separated)

## Input Format
Two integers separated by a space:
```
5 7
```

## Output Format
Program displays results in the format:
```
Sum: 12
Product: 35
```

## Example
```
Enter two numbers: 8 3
Sum: 11
Product: 24
```

## Notes
- Program uses integer arithmetic
- For decimal numbers, modify data types to `float`
- No input validation (assumes proper numeric input)

## Related Programs
- [calculator.c](../calculator.c) - Extended arithmetic operations
- [user_input.c](../user_input.c) - More input/output examples
```
