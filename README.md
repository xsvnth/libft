*This project has been created as part of the 42 curriculum by ahmelamr.*

# libft

## Description

libft is my first individual C library project at 42. The goal is to recode a set of standard C library functions, along with additional utility functions and linkedlist manipulations, to build a reuseable static library (libft.a) for future projexts.

## Instructions

- Compilation: run `make` (or `make all`) to build `libft.a`.
- `make clean` removes the object files.
- `make fclean` removes the objects and the library.
- `make re` rebuilds everything.

## Usage

### 1. Build the library

Run `make` in the project directory to compile the source files and create `libft.a`.

```bash
make
```

### 2. Include the header

Include `libft.h` in your C source file to access the library's function prototypes.

```c
#include "libft.h"
```

### 3. Compile and link your program

Compile your source file and link it with `libft.a`:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Here, `-L.` specifies the current directory as a library search path, and `-lft` links against `libft.a`.

### 4. Run your program

```bash
./program
```

Make sure `libft.a` and `libft.h` are available at the paths used during compilation.


## Detailed library description

### Part 1 (libc functions)

These functions reproduce common functions from the standard C library, mainly for memory handling, string manipulation, and character checking.

- `ft_isalpha` : checks if a character is an alphabetic letter.
- `ft_isdigit` : checks if a character is a digit.
- `ft_isalnum` : checks if a character is a letter or a digit.
- `ft_isascii` : checks if a character belongs to the ASCII character set.
- `ft_isprint` : checks if a character is printable.
- `ft_strlen` : calculates the length of a string.
- `ft_memset` : fills a memory area with a specific byte.
- `ft_bzero` : sets a memory area to zero.
- `ft_memcpy` : copies bytes from one memory area to another without handling overlap.
- `ft_memmove` : copies bytes between memory areas while handling overlap.
- `ft_strlcpy` : copies a string into a destination buffer with a size limit.
- `ft_strlcat` : appends a string to a destination buffer with a size limit.
- `ft_toupper` : converts a lowercase letter to uppercase.
- `ft_tolower` : converts an uppercase letter to lowercase.
- `ft_strchr` : finds the first occurrence of a character in a string.
- `ft_strrchr` : finds the last occurrence of a character in a string.
- `ft_strncmp` : compares two strings up to a given number of characters.
- `ft_memchr` : searches for a byte in a memory area.
- `ft_memcmp` : compares two memory areas byte by byte.
- `ft_strnstr` : searches for a substring within a string, limited to a given length.
- `ft_atoi` : converts a string into an integer.
- `ft_calloc` : allocates memory for multiple elements and initializes the allocated bytes to zero.
- `ft_strdup` : duplicates a string into newly allocated memory.

### Part 2 (additional functions)

These functions provide additional tools for creating, modifying, splitting, and displaying strings, as well as working with file descriptors.

- `ft_substr` : creates a substring from a string, starting at a given position and with a maximum length.
- `ft_strjoin` : joins two strings into a newly allocated string.
- `ft_strtrim` : removes specified characters from the beginning and end of a string.
- `ft_split` : splits a string into an array of strings using a delimiter character.
- `ft_itoa` : converts an integer into a string.
- `ft_strmapi` : creates a new string by applying a function to each character.
- `ft_striteri` : applies a function to each character of a string, passing its index and address.
- `ft_putchar_fd` : writes a character to a file descriptor.
- `ft_putstr_fd` : writes a string to a file descriptor.
- `ft_putendl_fd` : writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` : writes an integer to a file descriptor.

### Part 3 (linked lists)

These functions manage singly linked lists using the `t_list` structure.

- `ft_lstnew` : creates a new list node containing the given content.
- `ft_lstadd_front` : adds a node at the beginning of a list.
- `ft_lstsize` : counts the number of nodes in a list.
- `ft_lstlast` : returns the last node of a list.
- `ft_lstadd_back` : adds a node at the end of a list.
- `ft_lstdelone` : deletes one node and frees its content using a given deletion function.
- `ft_lstclear` : deletes all nodes in a list and frees their content.
- `ft_lstiter` : applies a function to the content of every node.
- `ft_lstmap` : creates a new list by applying a function to each node's content.

## Resources

- References: Standard C man pages, C programming references, and peer discussions.
- AI usage: AI was used as a learning tool to deepen my understanding of concepts such as function pointers, memory management. I wrote the library myself and used AI to help me understand complex concepts and edge cases.
