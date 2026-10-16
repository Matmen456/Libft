# Libft
My very first library


Example of a proper README, provided by chatgpt:


*This project has been created as part of the 42 curriculum by mfavoree.*

# libft

## Description

`libft` is a custom C library developed as part of the 42 curriculum. The goal of this project is to recreate commonly used functions from the standard C library and implement additional utility functions.

This project provides an opportunity to understand fundamental C concepts, including pointers, memory allocation, strings, and linked lists, while learning how to compile and organize reusable code into a static library.

## Instructions

### Requirements

- A C compiler, such as `cc` or `gcc`
- `make`

### Compilation

Clone the repository and navigate to the project directory:

```bash
git clone <repository-url>
cd libft
```

Compile the library using:

```bash
make
```

This generates the static library `libft.a`.

### Available Makefile rules

| Command | Description |
|---|---|
| `make` | Compiles the library. |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and the compiled library. |
| `make re` | Rebuilds the library from scratch. |

### Using the library

Include the header file in your C source code:

```c
#include "libft.h"
```

Compile your program together with the library:

```bash
cc main.c -L. -lft -I. -o program
```

Run the resulting executable:

```bash
./program
```

## Library Overview

The library contains custom implementations of common C functions, grouped into several categories.

### Character checks and conversions

Functions for testing and converting individual characters.

- `ft_isalpha` — Checks whether a character is alphabetic.
- `ft_isdigit` — Checks whether a character is a digit.
- `ft_isalnum` — Checks whether a character is alphanumeric.
- `ft_toupper` — Converts a lowercase character to uppercase.
- `ft_tolower` — Converts an uppercase character to lowercase.

### String manipulation

Functions for working with null-terminated strings.

- `ft_strlen` — Returns the length of a string.
- `ft_strlcpy` — Copies a string into a destination buffer with a size limit.
- `ft_strlcat` — Appends a string to a destination buffer with a size limit.
- `ft_strchr` — Locates the first occurrence of a character in a string.
- `ft_strncmp` — Compares two strings up to a specified number of characters.

### Memory manipulation

Functions for allocating, setting, and copying memory.

- `ft_memset` — Fills a memory area with a specified byte.
- `ft_bzero` — Sets a memory area to zero.
- `ft_memcpy` — Copies bytes between memory areas that do not overlap.
- `ft_memmove` — Copies bytes safely when memory areas may overlap.
- `ft_calloc` — Allocates zero-initialized memory.

### Linked lists

Functions for creating and manipulating singly linked lists.

- `ft_lstnew` — Creates a new list node.
- `ft_lstadd_front` — Adds a node to the beginning of a list.
- `ft_lstsize` — Counts the nodes in a list.
- `ft_lstlast` — Returns the last node in a list.
- `ft_lstclear` — Frees a list and its contents using a supplied deletion function.

*Note: This overview is illustrative. The actual functions depend on the project requirements and implementation.*

## Resources

### Documentation

- [C standard library reference — cppreference](https://en.cppreference.com/w/c/header)
- [GNU Make manual](https://www.gnu.org/software/make/manual/)
- [GNU Compiler Collection documentation](https://gcc.gnu.org/onlinedocs/)

### AI usage

AI tools were used as a supplementary learning resource during development.

They were used to:
- Clarify C language concepts, including pointers, memory management, and function behavior.
- Explain compiler errors and help investigate potential causes.
- Discuss implementation approaches and the reasoning behind design decisions.

The implementation, testing, and final verification of the submitted code were performed by the project author. AI-generated explanations and suggestions were evaluated against the project requirements and relevant documentation.

## Author

- **mfavoree** — 42 student
