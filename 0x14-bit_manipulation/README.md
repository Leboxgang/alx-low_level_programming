# 0x14. C - Bit Manipulation

## Description
This project covers various bit manipulation tasks in C. Bit manipulation involves direct handling of data at the bit level, which is essential for optimizing performance and handling low-level operations in embedded systems.

## Tasks

### 0. 0
Write a function that converts a binary number to an unsigned int.

- Prototype: `unsigned int binary_to_uint(const char *b);`
- Returns the converted number, or 0 if there is one or more chars in the string `b` that is not `0` or `1`, or if `b` is `NULL`.

### 1. 1
Write a function that prints the binary representation of a number.

- Prototype: `void print_binary(unsigned long int n);`
- Format: Prints the binary representation of `n`.
- Restrictions: You are not allowed to use arrays, malloc, `%` or `/` operators.

### 2. 10
Write a function that returns the value of a bit at a given index.

- Prototype: `int get_bit(unsigned long int n, unsigned int index);`
- Returns: The value of the bit at index or `-1` if an error occurred.

### 3. 11
Write a function that sets the value of a bit to `1` at a given index.

- Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
- Returns: `1` if it worked, or `-1` if an error occurred.

### 4. 100
Write a function that sets the value of a bit to `0` at a given index.

- Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
- Returns: `1` if it worked, or `-1` if an error occurred.

### 5. 101
Write a function that returns the number of bits you would need to flip to get from one number to another.

- Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- Restrictions: You are not allowed to use the `%` or `/` operators.
