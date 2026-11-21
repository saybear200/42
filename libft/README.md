Libft
Description

Libft is the first project of the 42 Common Core curriculum. Its goal is to recreate a selection of functions from the C standard library, along with additional utility functions that will be useful throughout the rest of the curriculum.

The project consists of building a custom C library, libft.a, which can be reused in future C projects.

Library Contents
Character Checks and Conversions
ft_isalpha – Checks whether a character is an alphabetical letter (A-Z or a-z).
ft_isdigit – Checks whether a character is a decimal digit (0-9).
ft_isalnum – Checks whether a character is alphanumeric (a letter or a digit).
ft_isascii – Checks whether a character belongs to the ASCII range (0-127).
ft_isprint – Checks whether a character is printable (32-126).
ft_toupper – Converts a lowercase letter to uppercase, leaving other characters unchanged.
ft_tolower – Converts an uppercase letter to lowercase, leaving other characters unchanged.
Memory Functions
ft_memset – Fills the first n bytes of a memory area with a specified byte and returns the memory area.
ft_bzero – Sets the first n bytes of a memory area to zero.
ft_memcpy – Copies n bytes from a source memory area to a destination. The memory areas must not overlap.
ft_memmove – Copies n bytes from a source to a destination memory area, correctly handling overlapping regions.
ft_memchr – Searches the first n bytes of a memory area for a specific byte and returns a pointer to its first occurrence, or NULL if it is not found.
ft_memcmp – Compares the first n bytes of two memory areas, returning the difference between the first pair of bytes that differ, or 0 if they are identical.
ft_calloc – Allocates memory for nmemb elements of size bytes each, initializes the allocated memory to zero, and returns NULL if allocation fails.
String Functions
ft_strlen – Returns the length of a string, excluding the terminating null character ('\0').
ft_strlcpy – Copies a string into a destination buffer of a specified size, ensuring null-termination when the buffer size is greater than zero. Returns the length of the source string.
ft_strlcat – Appends a string to another within a specified buffer size, ensuring null-termination when possible. Returns the total length of the string it attempted to create.
ft_strchr – Finds the first occurrence of a character in a string and returns a pointer to it, or NULL if it is not found.
ft_strrchr – Finds the last occurrence of a character in a string and returns a pointer to it, or NULL if it is not found.
ft_strnstr – Searches for the first occurrence of a substring within a string, examining at most len characters. Returns NULL if no match is found.
ft_strncmp – Compares up to n characters of two strings, returning the difference between the first pair of characters that differ, or 0 if they are equal.
ft_strdup – Allocates memory and creates a duplicate of the given string.
ft_substr – Creates a newly allocated substring starting at index start, with a maximum length of len.
ft_strjoin – Creates a newly allocated string by concatenating two strings.
ft_strtrim – Creates a copy of a string with all characters belonging to a specified set removed from both the beginning and the end.
ft_split – Splits a string into an array of strings using a specified delimiter character. The resulting array is null-terminated.
ft_strmapi – Creates a new string by applying a given function to each character, using its index as an additional parameter.
ft_striteri – Applies a given function to each character of a string, using its index as an additional parameter. Modifies the original string directly.
ft_atoi – Converts the initial portion of a string into an integer, skipping leading whitespace and handling an optional sign.
ft_itoa – Converts an integer into its string representation and returns a newly allocated string.
File Descriptor Output
ft_putchar_fd – Writes a character to a specified file descriptor.
ft_putstr_fd – Writes a string to a specified file descriptor.
ft_putendl_fd – Writes a string followed by a newline to a specified file descriptor.
ft_putnbr_fd – Writes an integer to a specified file descriptor.
Singly Linked Lists
ft_lstnew – Creates a new list node containing the given content, with its next pointer initialized to NULL.
ft_lstadd_front – Inserts a new node at the beginning of a linked list.
ft_lstadd_back – Appends a new node to the end of a linked list.
ft_lstsize – Returns the number of nodes in a linked list.
ft_lstlast – Returns the last node of a linked list.
ft_lstdelone – Deletes a single node by freeing its content using the provided del function, then freeing the node itself.
ft_lstclear – Deletes and frees a node and all subsequent nodes, using the provided del function to free their contents. Sets the list pointer to NULL.
ft_lstiter – Applies a given function to the content of every node in a linked list.
ft_lstmap – Creates a new linked list by applying a function to the content of each node in the original list. If an allocation fails, the provided del function is used to free the content and nodes already created.
Instructions
1. Clone the Repository

Clone the repository and navigate into the project directory:

bash
git clone <repository-url> libft
cd libft

2. Build the Library

Compile the project using make:

bash
make


This generates the static library libft.a.

3. Use the Library

To use Libft in a C project, include the libft.h header file and link the compiled library when building your program:

bash
cc -Wall -Wextra -Werror -I. main.c ./libft.a -o program


Run the compiled executable with:

bash
./program

4. Makefile Commands

The project includes the following Makefile commands:

Command	Description
make	Compiles the library and generates libft.a.
make clean	Removes all object files.
make fclean	Removes all object files and the compiled library.
make re	Rebuilds the library from scratch.
Resources
The official 42 Libft project subject and instructions.
The manual pages (man) for standard C library functions.
C language documentation and references covering standard library functions.
AI Usage

AI was used as a support tool to clarify project requirements, identify potential issues in the code, and improve the wording and structure of this README.

The implementation and final verification of the project were carried out by the author.
