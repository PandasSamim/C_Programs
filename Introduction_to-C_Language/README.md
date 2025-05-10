# Introduction to C Programming

![C Basics](https://img.shields.io/badge/C-Basics-blue.svg) ![Algorithm](https://img.shields.io/badge/Algorithm-16-yellow.svg) ![Flowchart](https://img.shields.io/badge/Flowchart-16-red.svg)

Fundamental C programs demonstrating core language concepts through practical assignments. Each program includes algorithm and flowchart design.

## Assignment Index

| # | File Name | Program Description |
|---|----------------------|----------------------|
| 1 | [01_sum_product](https://github.com/PandasSamim/C_Programs/tree/main/Introduction_to-C_Language/01_sum_product) | Sum & Product Calculator |
| 2 | [02_number_comparison]() | Number Comparison |
| 3 | [03_greatest_numbers]() | Find Greatest & Third Greatest |
| 4 | [04_even_odd]() | Even/Odd Number Printer |
| 5 | [05_natural_sum]() | Sum of Natural Numbers |
| 6 | [06_factors]() | Factor Finder |
| 7 | [07_multiples]() | First 10 Multiples |
| 8 | [08_prime_check]() | Prime Number Checker |
| 9 | [09_average_calculator]() | Average Calculator |
| 10 | [10_temperature_converter]() | Temperature Converter |
| 11 | [11_harmonic_series]() | Harmonic Series Calculator |
| 12 | [12_rightmost_digit]() | Rightmost Digit Extractor |
| 13 | [13_shape_analyzer]() | Shape Analyzer |
| 14 | [14_input_detector]() | Input Type Detector |
| 15 | [15_case_reverser]() | Case Reverser |
| 16 | [16_interactive_math]() | Interactive Division/Multiplication |


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
