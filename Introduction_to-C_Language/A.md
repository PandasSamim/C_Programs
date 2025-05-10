# Introduction to C Programming

![C Basics](https://img.shields.io/badge/C-Basics-blue.svg) ![Assignments](https://img.shields.io/badge/Assignments-23-yellow.svg)

Fundamental C programs demonstrating core language concepts through practical assignments. Each program includes algorithm and flowchart design.

## Assignment Index

| # | Program Description | Algorithm | Flowchart |
|---|----------------------|-----------|-----------|
| 8 | Sum & Product Calculator | [Algorithm](#) | [Flowchart](#) |
| 9 | Number Comparison | [Algorithm](#) | [Flowchart](#) |
| 10 | Find Greatest & Third Greatest | [Algorithm](#) | [Flowchart](#) |
| 11 | Even/Odd Number Printer | [Algorithm](#) | [Flowchart](#) |
| 12 | Sum of Natural Numbers | [Algorithm](#) | [Flowchart](#) |
| 13 | Factor Finder | [Algorithm](#) | [Flowchart](#) |
| 14 | First 10 Multiples | [Algorithm](#) | [Flowchart](#) |
| 15 | Prime Number Checker | [Algorithm](#) | [Flowchart](#) |
| 16 | Average Calculator | [Algorithm](#) | [Flowchart](#) |
| 17 | Temperature Converter | [Algorithm](#) | [Flowchart](#) |
| 18 | Harmonic Series Calculator | [Algorithm](#) | [Flowchart](#) |
| 19 | Rightmost Digit Extractor | [Algorithm](#) | [Flowchart](#) |
| 20 | Shape Analyzer | [Algorithm](#) | [Flowchart](#) |
| 21 | Input Type Detector | [Algorithm](#) | [Flowchart](#) |
| 22 | Case Reverser | [Algorithm](#) | [Flowchart](#) |
| 23 | Interactive Division/Multiplication | [Algorithm](#) | [Flowchart](#) |

## Program Files

```
01_Introduction_to-C_Language/
├── 08_sum_product.c
├── 09_number_comparison.c
├── 10_greatest_numbers.c
├── 11_even_odd.c
├── 12_natural_sum.c
├── 13_factors.c
├── 14_multiples.c
├── 15_prime_check.c
├── 16_average_calculator.c
├── 17_temperature_converter.c
├── 18_harmonic_series.c
├── 19_rightmost_digit.c
├── 20_shape_analyzer.c
├── 21_input_detector.c
├── 22_case_reverser.c
└── 23_interactive_math.c
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
