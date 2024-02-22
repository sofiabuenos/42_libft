# LIBFT

Libft is a library of functions created as part of a programming project. The goal of this project is to replicate the behavior of some Standard C Library functions and introduce additional, useful functions for future projects.

The project consists of several `.c` files, each containing specific functions, a header file that includes all function prototypes and data structures used in the project, and a Makefile for automating compilation, cleaning, and recompilation tasks.

## Libft Functions

### Functions from `<ctype.h>`

- `ft_isalpha`: Checks if a character is an alphabetic character.
- `ft_isdigit`: Determines whether a character is a digit (0 to 9).
- `ft_isalnum`: Tests if a character is alphanumeric.
- `ft_isascii`: Verifies if a character fits within the ASCII character set.
- `ft_isprint`: Checks if a character is printable.
- `ft_toupper`: Converts a character to uppercase.
- `ft_tolower`: Converts a character to lowercase.

### Functions from `<string.h>`

- `ft_memset`: Sets a constant byte value throughout a memory block.
- `ft_strlen`: Calculates the length of a string.
- `ft_bzero`: Clears a byte string (sets all values to zero).
- `ft_memcpy`: Copies a memory area.
- `ft_memmove`: Safely copies a memory area.
- `ft_strlcpy`: Copies a string to a specific size.
- `ft_strlcat`: Concatenates strings up to a specific size.
- `ft_strchr`: Locates a character in a string.
- `ft_strrchr`: Finds the last occurrence of a character in a string.
- `ft_strncmp`: Compares two strings up to a specified length.
- `ft_memchr`: Searches for a character in a memory block.
- `ft_memcmp`: Compares memory areas.
- `ft_strnstr`: Locates a substring in a string.
- `ft_strdup`: Creates a duplicate of the provided string.

### Functions from `<stdlib.h>`

- `ft_atoi`: Converts a string to an integer.
- `ft_calloc`: Allocates memory and initializes it with zero values.

### Non-standard functions

- `ft_substr`: Extracts a substring from a string.
- `ft_strjoin`: Concatenates two strings.
- `ft_strtrim`: Removes specified characters from the beginning and end of a string.
- `ft_split`: Splits a string using a specified character.
- `ft_itoa`: Converts an integer to a string.
- `ft_strmapi`: Applies a function to each character of a string, with the index as an argument.
- `ft_striteri`: Applies a function to each character of a string, with the index as an argument.
- `ft_putchar_fd`: Writes a character to a file descriptor.
- `ft_putstr_fd`: Writes a string to a file descriptor.
- `ft_putendl_fd`: Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd`: Writes a number to a file descriptor.

### Linked list functions

- `ft_lstnew`: Creates a new list element.
- `ft_lstadd_front`: Adds an element to the beginning of a list.
- `ft_lstsize`: Counts the number of elements in a list.
- `ft_lstlast`: Retrieves the last element of a list.
- `ft_lstadd_back`: Adds an element to the end of a list.
- `ft_lstclear`: Deletes and frees the memory of a list.
- `ft_lstiter`: Applies a function to each element of a list.
- `ft_lstmap`: Applies a function to each element of a list, creating a new list.
