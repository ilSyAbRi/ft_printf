# ***ft_printf***

A reimplementation of printf() in C, built as a static library.

```
                                          __ _                   _       _    __ 
                                         / _| |_      _ __  _ __(_)_ __ | |_ / _|
                                        | |_| __|    | '_ \| '__| | '_ \| __| |_ 
                                        |  _| |_     | |_) | |  | | | | | |_|  _|
                                        |_|  \__|____| .__/|_|  |_|_| |_|\__|_|  
                                               |_____|_|                         
```
---

```c
int ft_printf(const char *, ...);
```

---

###### Handles:   `c s p d i u x X %`

###### Rules:   `no buffer management, no libc printf`

###### Allowed:   `write, malloc, free, va_start/arg/copy/end`

###### Build:   `ar → libftprintf.a`

###### Files:   `Makefile, ft_printf.h, *.c`

***Goal: master variadic functions and formatted output.***

### Project Structure

```
ft_printf/
├── Makefile                 # Build static library libftprintf.a
├── LICENSE                  # MIT License
├── Readme.md                # Project info & usage
├── en.subject.pdf           # PDF of project subject

├── ft_printf.h              # Prototypes for all functions
├── ft_printf.c              # Main dispatcher; parses format string & calls handlers

├── Format Handlers          # Each handles a specific specifier
│   ├── ft_do_base_10.c      # %d,%i,%u → ft_putnbr, ft_count_signed_base, ft_count_unsigned_base
│   ├── ft_do_hex.c          # %x,%X → ft_print_hex, ft_count_unsigned_base
│   ├── ft_do_address.c      # %p → ft_print_hex, ft_count_unsigned_base, ft_putstr
│   ├── ft_do_str_char.c     # %s,%c → ft_putstr, ft_putchar, ft_strlen
│   └── ft_do_modulo.c       # %% → ft_putchar

├── Helpers                  # Utility functions used by handlers
│   ├── ft_putchar.c         # Print char
│   ├── ft_putstr.c          # Print string
│   ├── ft_putnbr.c          # Print signed number
│   ├── ft_print_hex.c       # Print hex number (lower/upper)
│   ├── ft_strlen.c          # String length
│   ├── ft_count_signed_base.c   # Count digits of signed number
│   └── ft_count_unsigned_base.c # Count digits of unsigned number

```

[Click here to open the PDF subject for more detail](en.subject.pdf)


---

### Example Test (main.c)

```c
#include "ft_printf.h"

int main(void)
{
    int r = ft_printf("Hi %s %d%%\n", "42", 7);
    ft_printf("Return: %d\n", r);
    return 0;
}
```

### Expected Output
```
Hi 42 7%
Return: 8
```
### Build

```
make
```
### Creates:

```
libftprintf.a
```

### Compile & Run Test

```
cc -Wall -Wextra -Werror libftprintf.a main.c -o test
./test
```

---

### 🖨️ ft_printf Project Structure (Ultra-Informative)

```c
ft_printf/
├── 📄 Makefile
│   └─ Compiles all `.c` files into `libftprintf.a` (static library)
│      • Flags: -Wall -Wextra -Werror → strict error checking
│      • Example: cc -Wall -Wextra -Werror libftprintf.a main.c -o test
│      • Ensures modular compilation and proper linking of helpers & handlers

├── 📄 ft_printf.h
│   └─ Declares all function prototypes for:
│       • Handlers (ft_do_*.c)
│       • Helpers (ft_*.c)
│       • Ensures modularity & compilation safety

├── 📄 ft_printf.c
│   └─ Central dispatcher:
│       • Parses format strings character by character
│       • Validates conversion specifiers: %c, %s, %p, %d, %i, %u, %x, %X, %%
│       • Calls appropriate handler functions
│       • Returns total characters printed
│       • Returns -1 for NULL input or incomplete format (`%` at end)

├── 🗂️ Handlers/   (Functions for specific conversion specifiers)
│   ├── 📄 ft_do_base_10.c
│   │   └─ Handles `%d`, `%i` (signed) and `%u` (unsigned)
│   │       • Dependencies: ft_putnbr, ft_count_signed_base, ft_count_unsigned_base
│   │       • Handles negative numbers and unsigned printing
│   │       • Returns total characters printed
│
│   ├── 📄 ft_do_hex.c
│   │   └─ Handles `%x` (lowercase) and `%X` (uppercase)
│   │       • Dependencies: ft_print_hex, ft_count_unsigned_base
│   │       • Converts numbers to hexadecimal string
│   │       • Returns total characters printed
│
│   ├── 📄 ft_do_address.c
│   │   └─ Handles `%p` (pointers)
│   │       • Dependencies: ft_print_hex, ft_count_unsigned_base, ft_putstr
│   │       • Prints `0x` prefix
│   │       • Prints "(nil)" for NULL pointers
│   │       • Returns total characters printed including prefix
│
│   ├── 📄 ft_do_str_char.c
│   │   └─ Handles `%s` (strings) and `%c` (characters)
│   │       • Dependencies: ft_putstr, ft_putchar, ft_strlen
│   │       • Prints "(null)" for NULL strings
│   │       • Returns total characters printed
│
│   └── 📄 ft_do_modulo.c
│       └─ Handles literal `%%`
│           • Dependencies: ft_putchar
│           • Returns 1

├── 🗂️ Helpers/   (Utility functions supporting handlers)
│   ├── 📄 ft_putchar.c
│   │   └─ Writes a single character to stdout
│
│   ├── 📄 ft_putstr.c
│   │   └─ Writes a string to stdout
│
│   ├── 📄 ft_putnbr.c
│   │   └─ Prints signed or unsigned numbers
│   │       • Handles negative numbers and recursion
│
│   ├── 📄 ft_print_hex.c
│   │   └─ Prints numbers in hexadecimal format
│   │       • Supports lowercase (`x`) and uppercase (`X`)
│       • Uses recursion for multi-digit numbers
│
│   ├── 📄 ft_strlen.c
│   │   └─ Returns length of a null-terminated string
│
│   ├── 📄 ft_count_signed_base.c
│   │   └─ Returns digit count of signed numbers in a given base
│   │       • Includes extra count for negative sign
│
│   └── 📄 ft_count_unsigned_base.c
│       └─ Returns digit count of unsigned numbers in a given base

```
---


## A Note on Variadic Functions


Variadic functions in C are special: they allow a function to accept a flexible number of arguments, rather than a fixed set.<br>
Think of them like a magical box: you open it, and inside could be one item, ten items, or none at all—the function decides how to handle whatever is there.<br>
This is exactly how printf works; it doesn’t know in advance how many values you will give it, but it can process each one based on the format string.<br>

##### To manage this flexibility safely, C provides the <stdarg.h> library with four key tools:
```
va_list: Holds the state of the variable arguments.

va_start: Initializes the list to start reading arguments.

va_arg: Retrieves the next argument, specifying its type.

va_end: Cleans up when done.
```
The trick lies in knowing the order and types of arguments.<br>
The format string acts as a guide: it tells the function, “the first argument is a string, the next is an integer, then maybe a pointer,” and so on. If you ignore this order, the function might read garbage or crash.<br>

Variadic functions are not just about flexibility—they are about intelligent control over dynamic input.<br>
They let you write powerful, reusable, and elegant code that adapts to any situation.<br>
In ft_printf, this is the heart of its design: parsing the string, deciding what each argument is, and printing it perfectly without knowing in advance how many values you will provide.<br>

```
The best way to understand variadic functions is by practicing exercises.
```
### 1. Multiply Numbers

Subject: Multiply count integers.

#### Prototype:
```c
int variadic_function_do_multiple(int count, ...);
```

#### Example:
```c
variadic_function_do_multiple(5, 1, 2, 3, 4, 5);
```

#### Expected Output:
```
120
```

Explanation: Loops through all integers and multiplies them. Simple introduction to using va_list.

### 2. Average Floating-Point Numbers

Subject: Compute the average of count floating-point numbers.

#### Prototype:
```c
float variadic_function_average_floating_point(int count, ...);
```

#### Example:
```c
variadic_function_average_floating_point(3, 2.5, 7.0, 9.5);
```

#### Expected Output:
```
6.33
```

Explanation: Loops through all doubles using va_arg and calculates the sum divided by count.

### 3. Find Maximum

Subject: Return the largest of count integers.

#### Prototype:
```c
int *variadic_function_find_max(int count, ...);
```

#### Example:
```c
variadic_function_find_max(5, 3, 3, 5, 6, 1);
```

#### Expected Output:
```
6
```

Explanation: Loops through all integers and keeps track of the largest value.

### 4. Concatenate Strings

Subject: Combine count strings into one dynamically allocated string.

#### Prototype:
```c
char *concat(int count, ...);
```

#### Example:
```c
concat(3, "hello ", "dear ", "world");
```

#### Expected Output:
```
hello dear world
```

Explanation:

Counts total length of strings.

Allocates memory.

Copies each string in order.

Demonstrates dynamic memory use with variadic arguments.

### 5. Print Multiple Arrays

Subject: Print several integer arrays, each with its length.

Prototype:
```c
void debug_arrays(int count, ...);
```

#### Example:
```c
int arr1[4] = {1, 2, 3, 4};
int arr2[6] = {10, 20, 30, 40, 50, 60};
debug_arrays(2, arr1, 4, arr2, 6);
```

#### Expected Output:
```
1 2 3 4
10 20 30 40 50 60
```

Explanation: Shows how to handle arrays as variadic arguments along with metadata (lengths).

### 6. Log Messages

Subject: Print formatted log messages with levels: INFO, SUCCESS, WARNING.

#### Prototype:
```c
void variadic_log_msg(int level, const char *format, ...);
```

#### Example:
```c
variadic_log_msg(INFO, "User %s logged in at %d", "Alice", 10);
```

#### Expected Output:
```
[INFO] User Alice logged in at 10
```

#### Explanation:

Demonstrates using format specifiers.

Uses va_arg to fetch arguments dynamically.

Mimics simplified printf.


```
SE YOU
```
