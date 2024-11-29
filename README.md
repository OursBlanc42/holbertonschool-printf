# _printf - Reimplementation of a Custom `printf` Function

### Overview
Hi there! Welcome to our`_printf` project. The goal here was to recreate the standard C `printf` function. 

## What is `_printf`?

`_printf`  is a custom implementation of the standard `printf` function in C. It supports various format specifiers to display characters, strings, integers, and symbols. This version uses variadic functions to dynamically handle the passed arguments.

### Features
**what `_printf` can do**

- `%c` : Displays a single character.
- `%s` : Displays a string.
- `%%` : Simply displays a percentage sign (`%`).
- `%d` ou `%i` : Displays an integer in base 10.


We tested different examples with the original `printf` and our custom _printf to ensure our code performs just as well as the standard function.
**Some examples**
```c
{
_printf("_printf\t test 1: uppercase B: %c and uppercase D: %c \n", 'B', 'D'); // Displays: "_printf test 1: uppercase B: B and uppercase D: D"

_printf("_printf\t test 13: A simple string: %s \n", "I am a simple string!"); // Displays: "_printf test 13: A simple string: I am a simple string!"

_printf("_printf\t test 3: percentage %% \n"); // Displays: "_printf test 3: percentage %"

_printf("_printf\t test d-1: Positive %d negative %d zero %d: \n", 42, -42, 0); // Displays: "_printf test d-1: Positive 42 negative -42 zero 0"

_printf("_printf\t test 15: a NULL string: %s\n", str_null); // Displays: "_printf test 15: a NULL string: (null)"

len1 = printf("real printf\t test A20: Testing string lengths\n"); // "real printf test A20: Testing string lengths"
len2 = _printf("holb printf\t test A20: Testing string lengths\n"); // "holb printf test A20: Testing string lengths"
// And computes their respective lengths in `len1` and `len2`
}
```

## File Organization
### main.h 
This file contains all the necessary declarations, prototypes, and a structure to link specifiers (like `%c` ou `%s`) to their corresponding functions.

## function_print.c  

This file contains the functions responsible for specific outputs (for example, `print_char`, `print_string`, etc.).
## _printf.c 

This is the core of the operation. It parses the format string, identifies specifiers, and calls the appropriate functions.
