# Introduction to C Programming

![C Basics](https://img.shields.io/badge/C-Basics-blue.svg) ![Assignments](https://img.shields.io/badge/Assignments-16-yellow.svg) ![Flowchart](https://img.shields.io/badge/Flowchart-16-red.svg)

Fundamental C programs demonstrating core language concepts through practical assignments. Each program includes algorithm and flowchart design.

## Assignment Index

| # | Program Description | Algorithm | Flowchart |
|---|----------------------|-----------|-----------|
| 1 | Sum & Product Calculator | [Algorithm](#) | [Flowchart](#) |
| 2 | Number Comparison | [Algorithm](#) | [Flowchart](#) |
| 3 | Find Greatest & Third Greatest | [Algorithm](#) | [Flowchart](#) |
| 4 | Even/Odd Number Printer | [Algorithm](#) | [Flowchart](#) |
| 5 | Sum of Natural Numbers | [Algorithm](#) | [Flowchart](#) |
| 6 | Factor Finder | [Algorithm](#) | [Flowchart](#) |
| 7 | First 10 Multiples | [Algorithm](#) | [Flowchart](#) |
| 8 | Prime Number Checker | [Algorithm](#) | [Flowchart](#) |
| 9 | Average Calculator | [Algorithm](#) | [Flowchart](#) |
| 10 | Temperature Converter | [Algorithm](#) | [Flowchart](#) |
| 11 | Harmonic Series Calculator | [Algorithm](#) | [Flowchart](#) |
| 12 | Rightmost Digit Extractor | [Algorithm](#) | [Flowchart](#) |
| 13 | Shape Analyzer | [Algorithm](#) | [Flowchart](#) |
| 14 | Input Type Detector | [Algorithm](#) | [Flowchart](#) |
| 15 | Case Reverser | [Algorithm](#) | [Flowchart](#) |
| 16 | Interactive Division/Multiplication | [Algorithm](#) | [Flowchart](#) |

## Program Files

```
01_Introduction_to-C_Language/
├── 01_sum_product
├── 02_number_comparison
├── 03_greatest_numbers
├── 04_even_odd
├── 05_natural_sum
├── 06_factors
├── 07_multiples
├── 08_prime_check
├── 09_average_calculator
├── 10_temperature_converter
├── 11_harmonic_series
├── 12_rightmost_digit
├── 13_shape_analyzer
├── 14_input_detector
├── 15_case_reverser
└── 16_interactive_math
```

## Common Algorithm Structure

1. **Input Phase**:
   - Variable declaration
   - Data collection using `scanf()`

2. **Processing Phase**:
   - Mathematical operations
   - Conditional checks
   - Looping constructs

3. **Output Phase**:
   - Results display using `printf()`

## Flowchart Symbols Used

- Oval: Start/End
- Parallelogram: Input/Output
- Rectangle: Process
- Diamond: Decision
- Arrows: Flow direction

## Example Program (08_sum_product.c)

```c
#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Processing
    int sum = num1 + num2;
    int product = num1 * num2;
    
    // Output
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    
    return 0;
}
```

## How to Use

1. Compile any program:
   ```bash
   gcc filename.c -o output
   ./output
   ```

2. View algorithm steps in the respective markdown files

3. Refer to flowchart diagrams (PNG/SVG files)

## Contribution Guidelines

- Follow consistent indentation (4 spaces)
- Include algorithm steps as comments
- Add corresponding flowchart file for new programs
- Test edge cases (negative numbers, zero, etc.)
