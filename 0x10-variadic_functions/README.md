# README

This repository contains C functions that use variadic arguments to handle and print different types of data.

## Tasks

### 0. Sum of All Parameters

**Function:** `int sum_them_all(const unsigned int n, ...);`

- **Description:** Returns the sum of all its parameters.
- **Behavior:** If `n == 0`, return 0.

### 1. Print Numbers

**Function:** `void print_numbers(const char *separator, const unsigned int n, ...);`

- **Description:** Prints numbers, followed by a new line.
- **Parameters:**
  - `separator`: String to print between numbers (if `NULL`, don’t print it).
  - `n`: Number of integers.
- **Behavior:** Print a new line at the end.

### 2. Print Strings

**Function:** `void print_strings(const char *separator, const unsigned int n, ...);`

- **Description:** Prints strings, followed by a new line.
- **Parameters:**
  - `separator`: String to print between strings (if `NULL`, don’t print it).
  - `n`: Number of strings.
- **Behavior:** If a string is `NULL`, print `(nil)` instead. Print a new line at the end.

### 3. Print Anything

**Function:** `void print_all(const char * const format, ...);`

- **Description:** Prints anything based on format specifiers.
- **Parameters:**
  - `format`: List of argument types (`c` for char, `i` for integer, `f` for float, `s` for string).
- **Behavior:** Print a new line at the end. Ignore any format specifiers not listed.
