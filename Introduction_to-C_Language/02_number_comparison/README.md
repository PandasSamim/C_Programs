# Greater Number Finder

## Description
This program takes two numbers as input and determines which one is greater. If both numbers are equal, it prints "EQUAL".

## Question
Write a program in C to read two numbers and print the greater number. If both numbers are the same, print "EQUAL".

## Features
- Takes two integer inputs from the user
- Compares the two numbers
- Prints the greater number or "EQUAL" if they're the same
- Simple and clean output format

## Usage
1. Compile the program:
   ```bash
   gcc main.c -o main
   ```
2. Run the executable:
   ```bash
   ./main
   ```
3. Enter two numbers when prompted (space-separated)

## Input Format
Two integers separated by a space:
```
5 7
```

## Output Format
Program displays results in one of these formats:
```
7 is greater number.
```
or
```
EQUAL
```

## Example 1
```
Enter two values: 8 3
8 is greater number.
```

## Example 2
```
Enter two values: 5 5
EQUAL
```

## Notes
- Program uses integer comparison
- No input validation (assumes proper numeric input)
