*This project has been created as part of the 42 curriculum by mfavoree.*

# Libft

> Your very first own library.

## Description

**Libft** is the first project of the 42 curriculum. The goal is to build a personal C library, `libft.a`, that reimplements a set of standard C library (libc) functions and adds a few extra utilities that the libc does not provide. The library is reused in later 42 projects, so it has to be correct, well-structured and norm-compliant.

The project teaches:

- How the standard library really behaves, by following the man pages strictly, including edge cases and return values.
- Pointer arithmetic, byte-level memory handling and string manipulation.
- Dynamic memory management with `malloc` and `free`, and avoiding leaks.
- Building and using a static library with `ar` and a Makefile.
- Working within the 42 Norm (coding style rules).

The library is split into three parts:

1. **Libc functions**: reimplementations prefixed with `ft_`.
2. **Additional functions**: helpers to create and transform strings and to write characters, strings and numbers to a file descriptor.
3. **Linked list functions**: a set of functions to create and manipulate singly linked lists.

### Library overview

#### Part 1: Libc functions

These match the prototypes and behavior of the originals. Only `malloc` is used, by `ft_calloc` and `ft_strdup`. Nothing else from the libc is called.

| Function | Description |
|---|---|
| `ft_isalpha` | Returns `1` if `c` is a letter, `0` otherwise |
| `ft_isdigit` | Returns `1` if `c` is a decimal digit, `0` otherwise |
| `ft_isalnum` | Returns `1` if `c` is a letter or a digit, `0` otherwise |
| `ft_isascii` | Returns `1` if `c` is in the ASCII range (0 to 127), `0` otherwise |
| `ft_isprint` | Returns `1` if `c` is a printable character (32 to 126), `0` otherwise |
| `ft_strlen` | Returns the length of a string, excluding the terminating `'\0'` |
| `ft_memset` | Fills `n` bytes of memory with a constant byte |
| `ft_bzero` | Sets `n` bytes of memory to zero |
| `ft_memcpy` | Copies `n` bytes between non-overlapping memory areas |
| `ft_memmove` | Copies `n` bytes between memory areas that may overlap |
| `ft_strlcpy` | Size-bounded string copy; always terminates when `size > 0`, returns `strlen(src)` |
| `ft_strlcat` | Size-bounded string concatenation; returns the length it tried to create |
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |
| `ft_strchr` | Finds the first occurrence of a character in a string |
| `ft_strrchr` | Finds the last occurrence of a character in a string |
| `ft_strncmp` | Compares at most `n` characters of two strings, as `unsigned char` |
| `ft_memchr` | Finds the first occurrence of a byte in a memory area |
| `ft_memcmp` | Compares two memory areas byte by byte, as `unsigned char` |
| `ft_strnstr` | Finds a substring in a string, searching at most `len` characters |
| `ft_atoi` | Converts the initial portion of a string to an `int` |
| `ft_calloc` | Allocates zero-initialized memory; checks for multiplication overflow |
| `ft_strdup` | Returns a newly allocated copy of a string |

#### Part 2: Additional functions

| Function | Description |
|---|---|
| `ft_substr` | Returns a new string extracted from `s`, starting at `start`, with a maximum length `len` |
| `ft_strjoin` | Returns a new string that is the concatenation of `s1` and `s2` |
| `ft_strtrim` | Returns a copy of `s1` with the characters of `set` removed from both ends |
| `ft_split` | Splits a string on a delimiter character into a `NULL`-terminated array of newly allocated strings |
| `ft_itoa` | Converts an integer to a newly allocated string, including negative numbers and `INT_MIN` |
| `ft_strmapi` | Applies a function to each character (with its index) and returns the results as a new string |
| `ft_striteri` | Applies a function to each character (by address, with its index) in place |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

#### Part 3: Linked lists

All list functions work with the following structure, declared in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node with the given content and `next` set to `NULL` |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstsize` | Counts the nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstdelone` | Frees one node's content (with `del`) and the node itself, without touching the next node |
| `ft_lstclear` | Deletes and frees a node and all its successors, then sets the list pointer to `NULL` |
| `ft_lstiter` | Applies a function to the content of every node |
| `ft_lstmap` | Builds a new list by applying a function to every node's content; cleans up on allocation failure |

### Technical choices

- **Allowed external functions:** only `malloc`, `free` and `write`, and only where the subject allows them.
- **Helper functions** inside a file are declared `static`, so they do not become part of the library's public interface.
- **No `restrict`:** prototypes follow the subject and never use the `restrict` qualifier.
- **Classification functions** return exactly `1` or `0`, as required, instead of the arbitrary non-zero value the glibc versions can return.
- **`ft_calloc`:** if `nmemb` or `size` is `0`, a unique pointer that can be passed to `free()` is returned, as required by the subject. The multiplication is checked for overflow before allocating.
- **`ft_memmove`:** copies forward or backward depending on the relative position of the buffers, so overlapping regions are handled correctly.
- **`ft_strlcpy` / `ft_strlcat`:** follow the BSD semantics (always terminate when possible, return the length they tried to create).
- **`ft_itoa` / `ft_putnbr_fd`:** handle `INT_MIN` without signed overflow.
- **`ft_split` / `ft_lstmap`:** free everything already allocated and return `NULL` if any allocation fails, so nothing is leaked.

## Instructions

### Requirements

- A C compiler (`cc`, `gcc` or `clang`)
- `make`
- `ar`

### Compilation

Clone the repository and build the library:

```bash
git clone https://github.com/Matmen456/Libft.git libft
cd libft
make
```

This produces `libft.a` at the root of the repository. All source files are compiled with `-Wall -Wextra -Werror`.

| Command | Effect |
|---|---|
| `make` | Builds `libft.a` |
| `make clean` | Removes the object files |
| `make fclean` | Removes the object files and `libft.a` |
| `make re` | Rebuilds everything from scratch |

## Resources

### Classic references

- [Linux man pages (man7.org)](https://man7.org/linux/man-pages/): reference for every reimplemented libc function.
- [The GNU C Library Reference Manual](https://www.gnu.org/software/libc/manual/)
- [libbsd](https://libbsd.freedesktop.org/): BSD functions (`strlcpy`, `strlcat`) for glibc systems.
- [42 Norm / norminette](https://github.com/42School/norminette): the coding style checker.
- Libft subject PDF from the 42 curriculum.

### Use of AI

AI (Claude, by Anthropic) was used as a review and writing assistant, not to generate the library. Specifically:

- **Code review:** my functions were checked, one batch at a time, against the man pages (Part 1) and the subject (Parts 2 and 3), looking for bugs, undefined behavior, Norm problems, and edge cases.
- **Header review:** `libft.h` was checked for missing or misnamed prototypes.
- **README:** this file was drafted with AI help and then reviewed and adjusted by me.

All code was written by me, and the fixes suggested by the review were applied and tested by me.
