# Libft

Libft is a custom implementation of essential C standard library functions, along with additional utility functions. It is designed to be a foundational library for future C projects, focusing on low-level memory manipulation, string handling, and linked list operations.

## 📚 Contents

The library is divided into the following parts:

### Part 1 – Libc Functions

Re-implementations of standard C library functions, such as:

- `memset`, `bzero`, `memcpy`, `memccpy`, `memmove`, `memchr`, `memcmp`
- `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strdup`
- `atoi`, `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`
- `calloc`

### Part 2 – Additional Functions

Extra functions to help with common tasks like string manipulation and memory handling:

- `substr`, `strjoin`, `strtrim`, `split`, `itoa`, `strmapi`, `striteri`
- `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd`

### Bonus – Linked List Utilities

Support for basic singly linked list operations:

- `lstnew`, `lstadd_front`, `lstsize`, `lstlast`
- `lstadd_back`, `lstdelone`, `lstclear`, `lstiter`, `lstmap`

## 🔧 Compilation

To compile the library, simply run:

```bash
make
```

## 🛠️ Useful Makefile Commands

| Command         | Description                                         |
|----------------|-----------------------------------------------------|
| `make`         | Compiles the source files and builds `libft.a`.     |
| `make clean`   | Removes all object (`.o`) files.                    |
| `make fclean`  | Removes all object files and `libft.a`.             |
| `make re`      | Runs `fclean` and then `make` to rebuild from scratch. |
| `make bonus`   | Compiles the bonus part (linked list functions).    |
