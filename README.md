*This project has been created as part
of the 42 curriculum by abaninas*
# Libft

My own C library, developed as part of the 42 Core Curriculum.

## About the Project

**Libft** is a project that involves recreating several standard C library functions from scratch, along with additional utility functions for string manipulation, memory management, and linked lists.

The goal is to strengthen my understanding of C programming, pointers, memory allocation, and data structures while building a reusable static library.

## Description

### Character Checks and Conversions
- `ft_isalpha` – Checks whether a character is an alphabetic letter.
- `ft_isdigit` – Checks whether a character is a digit.
- `ft_isalnum` – Checks whether a character is alphanumeric.
- `ft_isascii` – Checks whether a character belongs to the ASCII character set.
- `ft_isprint` – Checks whether a character is printable.
- `ft_toupper` – Converts a lowercase letter to uppercase.
- `ft_tolower` – Converts an uppercase letter to lowercase.

### Memory Management
- `ft_memset` – Fills a memory area with a specified value.
- `ft_bzero` – Sets a memory area to zero.
- `ft_memcpy` – Copies memory from one location to another.
- `ft_memmove` – Copies memory safely when source and destination overlap.
- `ft_memchr` – Searches for a byte in a memory area.
- `ft_memcmp` – Compares two memory areas.
- `ft_calloc` – Allocates zero-initialized memory.
- `ft_strdup` – Creates a duplicate of a string.

### String Manipulation
- `ft_strlen` – Calculates the length of a string.
- `ft_strlcpy` – Copies a string into a size-limited destination.
- `ft_strlcat` – Appends a string to a destination.
- `ft_strchr` – Finds the first occurrence of a character.
- `ft_strrchr` – Finds the last occurrence of a character.
- `ft_strncmp` – Compares two strings up to a specified length.
- `ft_strnstr` – Searches for a substring within a limited length.
- `ft_atoi` – Converts a string to an integer.
- `ft_substr` – Extracts a substring.
- `ft_strjoin` – Joins two strings.
- `ft_strtrim` – Removes specified characters from the beginning and end of a string.
- `ft_split` – Splits a string using a delimiter.
- `ft_itoa` – Converts an integer to a string.
- `ft_strmapi` – Creates a new string by applying a function to each character.
- `ft_striteri` – Applies a function to each character in a string.

### File Descriptor Output
- `ft_putchar_fd` – Writes a character to a file descriptor.
- `ft_putstr_fd` – Writes a string to a file descriptor.
- `ft_putendl_fd` – Writes a string followed by a newline.
- `ft_putnbr_fd` – Writes an integer to a file descriptor.

### Linked List Operations
- `ft_lstnew` – Creates a new list node.
- `ft_lstadd_front` – Adds a node to the beginning of a list.
- `ft_lstsize` – Counts the nodes in a list.
- `ft_lstlast` – Returns the last node.
- `ft_lstadd_back` – Adds a node to the end of a list.
- `ft_lstdelone` – Deletes one node.
- `ft_lstclear` – Deletes and frees an entire list.
- `ft_lstiter` – Applies a function to each node's content.
- `ft_lstmap` – Creates a new list by applying a function to each node's content.

## “Instructions”

To compile the library, run:

```bash
make
```

This generates the static library:

```text
libft.a
```

Available Makefile rules:

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Recompile everything
```

## Usage

Include the library header in your C source file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lft -o program
```

Then run it:

```bash
./program
```

## What I Learned

Through this project, I practiced:

- Writing C functions from scratch.
- Working with pointers and memory addresses.
- Managing dynamic memory allocation and deallocation.
- Manipulating strings and raw memory.
- Implementing linked lists.
- Using Makefiles to automate compilation.
- Debugging and following coding standards.

## Resources

- [42 School](https://42.fr/)
- [C Programming Language Reference](https://en.cppreference.com/w/c.html)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)
- 42 Libft subject and project guidelines.
- Peer learning and code reviews with fellow 42 students.
- **AI tools:** Used for concept explanations, debugging assistance, and understanding C functions and memory management.
