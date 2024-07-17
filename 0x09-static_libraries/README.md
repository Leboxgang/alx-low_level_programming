# 0x09. Static Libraries

This project involves creating a static library `libmy.a` containing a collection of functions, and a script `create_static_lib.sh` to automate the creation of a static library from all `.c` files in the current directory.

## Static Library: libmy.a

The static library `libmy.a` contains the following functions:

1. `int _putchar(char c);`
   - Writes the character `c` to stdout.

2. `int _islower(int c);`
   - Checks if the character `c` is lowercase.

3. `int _isalpha(int c);`
   - Checks if the character `c` is an alphabetic character.

4. `int _abs(int n);`
   - Computes the absolute value of an integer `n`.

5. `int _isupper(int c);`
   - Checks if the character `c` is uppercase.

6. `int _isdigit(int c);`
   - Checks if the character `c` is a digit.

7. `int _strlen(char *s);`
   - Returns the length of the string `s`.

8. `void _puts(char *s);`
   - Prints the string `s` to stdout, followed by a new line.

9. `char *_strcpy(char *dest, char *src);`
   - Copies the string `src` to `dest`.

10. `int _atoi(char *s);`
    - Converts the string `s` to an integer.

11. `char *_strcat(char *dest, char *src);`
    - Concatenates the string `src` to the string `dest`.

12. `char *_strncat(char *dest, char *src, int n);`
    - Concatenates up to `n` characters from the string `src` to the string `dest`.

13. `char *_strncpy(char *dest, char *src, int n);`
    - Copies up to `n` characters from the string `src` to the string `dest`.

14. `int _strcmp(char *s1, char *s2);`
    - Compares the strings `s1` and `s2`.

15. `char *_memset(char *s, char b, unsigned int n);`
    - Fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`.

16. `char *_memcpy(char *dest, char *src, unsigned int n);`
    - Copies `n` bytes from the memory area `src` to the memory area `dest`.

17. `char *_strchr(char *s, char c);`
    - Locates the first occurrence of the character `c` in the string `s`.

18. `unsigned int _strspn(char *s, char *accept);`
    - Calculates the length of the initial segment of `s` which consists entirely of bytes in `accept`.

19. `char *_strpbrk(char *s, char *accept);`
    - Locates the first occurrence in the string `s` of any of the bytes in the string `accept`.

20. `char *_strstr(char *haystack, char *needle);`
    - Locates a substring `needle` in the string `haystack`.

## Script: create_static_lib.sh

The script `create_static_lib.sh` automates the creation of a static library `liball.a` from all the `.c` files in the current directory. It uses the following commands:

```bash
#!/bin/bash
# Create a static library called liball.a from all .c files in the current directory.
