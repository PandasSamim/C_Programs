# Introduction to C Programming

![C Basics](https://img.shields.io/badge/C-Basics-blue.svg)

This directory contains fundamental C programming examples that demonstrate core language concepts and syntax.

## Contents

| File | Description |
|------|-------------|
| `hello_world.c` | The classic "Hello, World!" program - simplest C program structure |
| `calculator.c` | Basic arithmetic operations (addition, subtraction, multiplication, division) |
| `data_types.c` | Demonstration of primitive data types in C |
| `variables.c` | Variable declaration, initialization, and usage examples |
| `user_input.c` | Programs using `scanf()` for user input |
| `constants.c` | Examples of `#define` and `const` usage |
| `comments.c` | Proper commenting styles in C |

## Key Concepts Covered

- Basic program structure (`main()` function, `#include` directives)
- Input/output operations (`printf()`, `scanf()`)
- Variables and data types (`int`, `float`, `char`, etc.)
- Arithmetic operators (`+`, `-`, `*`, `/`, `%`)
- Constants and literals
- Basic preprocessor directives (`#include`, `#define`)
- Proper code commenting

## Compilation Instructions

Compile any program in this directory using:

```bash
gcc filename.c -o output_name
./output_name
```

## Example Code Snippet

```c
#include <stdio.h>

int main() {
    // Simple variable demonstration
    int number = 42;
    float pi = 3.14;
    char letter = 'A';
    
    printf("Integer: %d\n", number);
    printf("Float: %.2f\n", pi);
    printf("Character: %c\n", letter);
    
    return 0;
}
```

## Recommended Learning Path

1. Start with `hello_world.c` to understand basic structure
2. Proceed to `variables.c` and `data_types.c`
3. Practice with `calculator.c` for operator usage
4. Explore `user_input.c` for interactive programs

## Contribution Guidelines

- Follow consistent indentation (4 spaces recommended)
- Include clear comments for each significant operation
- Keep examples simple and focused on single concepts
- Test all code before submitting
