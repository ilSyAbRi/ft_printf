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
