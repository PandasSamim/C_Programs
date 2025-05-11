# Greatest and Third Greatest Number Finder

## Description
This program reads `n` numbers from the user and prints the greatest and the third greatest numbers. It requires a minimum of 3 numbers to work properly.

## Question
Write a program in C to read `n` numbers from the user and print the greatest and the third greatest numbers.

## Features
- Takes `n` (count of numbers) as input from user
- Validates input to ensure `n` is a positive integer ≥ 3
- Dynamically allocates memory for the numbers
- Sorts the numbers in ascending order
- Prints the greatest and third greatest numbers
- Handles memory allocation failures
- Includes input validation for all numbers

## Usage
1. Compile the program:
   ```bash
   gcc main.c -o greatest_numbers
   ```
2. Run the executable:
   ```bash
   ./greatest_numbers
   ```
3. Enter the count of numbers when prompted
4. Enter the numbers one by one

## Input Format
First line: positive integer `n` (≥ 3)
Next `n` lines: one integer per line
```
5
10
20
30
40
50
```

## Output Format
Program displays results in this format:
```
The greatest number is: 50
The third greatest number is: 30
```

## Example 1
```
How many numbers do you enter?=> 4
Enter value #1: 10
Enter value #2: 30
Enter value #3: 20
Enter value #4: 40
The greatest number is: 40
The third greatest number is: 20
```

## Example 2
```
How many numbers do you enter?=> 3
Enter value #1: 5
Enter value #2: 5
Enter value #3: 5
The greatest number is: 5
The third greatest number is: 5
```

## Notes
- Program validates that `n` is at least 3
- Uses bubble sort for sorting the numbers
- Dynamically allocates memory for the array
- Properly handles memory deallocation
- Includes input validation for all numbers
