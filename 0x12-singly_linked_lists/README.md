# Singly Linked Lists

This repository contains various functions to manipulate singly linked lists in C.

## Requirements

- GCC compiler
- Ubuntu operating system

## Functions

### 0-print_list.c
- **Prototype:** `size_t print_list(const list_t *h);`
- **Description:** Prints all the elements of a `list_t` list and returns the number of nodes. If `str` is `NULL`, it prints `[0] (nil)`.

### 1-list_len.c
- **Prototype:** `size_t list_len(const list_t *h);`
- **Description:** Returns the number of elements in a `list_t` list.

### 2-add_node.c
- **Prototype:** `list_t *add_node(list_t **head, const char *str);`
- **Description:** Adds a new node at the beginning of a `list_t` list. The `str` needs to be duplicated.

### 3-add_node_end.c
- **Prototype:** `list_t *add_node_end(list_t **head, const char *str);`
- **Description:** Adds a new node at the end of a `list_t` list. The `str` needs to be duplicated.

### 4-free_list.c
- **Prototype:** `void free_list(list_t *head);`
- **Description:** Frees a `list_t` list.

## Compilation and Execution

To compile the files, use the following commands:

```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o print_list
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o list_len
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o add_node
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o add_node_end
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o free_list
